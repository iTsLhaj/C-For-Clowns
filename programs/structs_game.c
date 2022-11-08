
/* 
 * MADE WITH / BY: VIM - Vi IMproved 8.2 / iiT-s Lhaj
 * COMPILED: (Nov 4 2022 20:10:33)
 *
 * I WANNA SAY THANKS TO ME CAUSE THIS IS THE FIRST C CODE I'VE EVER WROTE WITHOUT 
 * GETTING FUCKED MY A MASSIVE AMOUT OF ERRORS
 * 
 * la demonstration des structures en c language 
 * (yalah aghn arwass)
 */

#include <stdio.h>

static char player_c_;
static unsigned int player_t_;

// using structs
// initialize player struct .
struct player
{
	int tier;
	char c_;
};

// using functions
void collect_and_store(void)
{
	printf("\n [set] CLASS: ");
	scanf("%c", &player_c_);

	printf("\n [set] TIER: ");
	scanf("%i", &player_t_);
}

struct player create_player(char c, int t)
{
	struct player p;
	
	p.tier = t;
	p.c_ = c;

	return p;
}

// using structs pointer to output player entity
void out_player_data(struct player* p_)
{
	printf("\n [get] PLAYER CLASS: %c\n\n [get] PLAYER TIER: %i\n\n", p_->c_, p_->tier);
}

int main(int argc, char** argv)
{
	// dealing with function pointers ONLY !!!
	void(*collect)() = &collect_and_store;
	struct player(*create)(char, int) = &create_player;
	void(*p_out)(struct player*) = &out_player_data;

	collect();
	struct player my_player = create(player_c_, player_t_);

	p_out(&my_player);

	return 0;
	
}















