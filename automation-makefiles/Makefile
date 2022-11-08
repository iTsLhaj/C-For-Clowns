
OBJECT_FILES = ./test.o

all ${OBJECT_FILES}:
	gcc main.c ${OBJECT_FILES} -o main

start_: test.c
	gcc test.c -o test.o -c

hclean:
	rm *.o

clean_all:
	rm *.o 
	rm main
