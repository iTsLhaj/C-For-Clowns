
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OPT_CREATE_BOOK 0
#define OPT_READ_BOOK 1
#define OPT_LIST_BOOK 2

#define BOOK_FLAG_SOLD 0b00000001
typedef unsigned char BOOK_FLAGS;

struct book
{
	char title[20];
	char description[200];
	BOOK_FLAGS flags;
};

FILE* f = NULL;
struct book* ptr = NULL;

int handle_create()
{

	struct book b;

	memset(&b, 0, sizeof(b));

	printf(" Enter the book's name: ");

	fgets(b.title, sizeof(b.title), stdin);
	// sizeof would not work if title is a ptr (char*)

	printf(" Enter the book's description: ");
	fgets(b.description, sizeof(b.description), stdin);

	printf(" iS Sold? Y/N: ");
	char c = 0;

	scanf("%c", &c);
	if(c == 'Y' || c == 'y')
	{
		b.flags |= BOOK_FLAG_SOLD;
	}

	fseek(f, 0, SEEK_END);
	fwrite(&b, sizeof(b), 1, f);

}

int how_many_books()
{
	fseek(f, 0, SEEK_END);
	unsigned long total_size = ftell(f);
	fseek(f, 0, SEEK_SET);

	return total_size / sizeof(struct book);
}

void view_book(struct book* book)
{
	system("clear");
	printf("\n Title: %s\n", book->title);
	printf(" Description: %s\n", book->description);

	if(book->flags & BOOK_FLAG_SOLD)
	{
		printf(" This book was sold sorry\n\n");
	}
}

int handle_list()
{
	struct book b;

	fseek(f, 0, SEEK_SET);
	int index = 0;
	int total_books = how_many_books();

	ptr = (struct book*) malloc(
		sizeof(struct book) * total_books
	);

	while(fread(&b, sizeof(b), 1, f) == 1)
	{
		memcpy(&ptr[index], &b, sizeof(b));
		printf("\n %i - %s", index, b.title);
		index++;	
	}

	int option;
	printf("\n Choose a book: ");
	scanf("%i", &option);

	if(option < 0 || option >= total_books)
	{
		printf(" Invalid book\n");
		return -1;
	}

	view_book(&ptr[option]);
	free(ptr);
	return 0;

}

int setup_file()
{
	f = fopen("./data.bin", "rb+");

	if(!f)
	{
		printf(" Failed to open file\n");
		return -1;
	}

	return 0;
}

int choose_opt()
{
	printf(" Enter an option: ");
	int opt_ = 0;

	scanf("%i", &opt_);
	getchar();

	system("clear");
	
	int res = 0;
	switch(opt_)
	{
		case OPT_CREATE_BOOK:
			res = handle_create();
			if (res < 0)
				return res;
		break;

		case OPT_READ_BOOK:
			printf(" You Selected to read a book\n");
		break;

		case OPT_LIST_BOOK:
			handle_list();
		break;

		default:
			printf(" Invalid Option choosen\n");
			return -1;
	}

	return 0;
}

int main(int argc, char** argv)
{

	if(setup_file() < 0)
	{
		return -1;
	}

	if(choose_opt() < 0)
	{
		return -1;
	}

	fclose(f);
	return 0;
	
}
