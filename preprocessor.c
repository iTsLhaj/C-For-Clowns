
#include <stdio.h>

#define ROWS 10;
#define COLS 10;

#define OUT_TITLE() printf(" -> Welcome To This Cursed Game ... <-");

#define GAME_OVER
#ifndef GAME_OVER

void gameover()
{
	printf(" -> You died ! <-");
	exit();
}


int main(int argc, char** argv)
{

	// #ifdef something_ | if something_ defined do ...
	// #endif end
	
	// #define something_ | that's clear
	
	// u can do this as well
	// #define ABC(x, a) printf("%i %i", x, a); <-
	// ABC() | i didn't include semicol cause it's already in the definition
	


	return 0;
}
