#include <stdio.h>

void userguess(int i, int a)
{
	if ( i == a)
		printf("Your guess is correct! The secret number is %d\n", a);
	else if ( i > a )
		printf("Too high. Guess again.\n");
	else if ( i < a )
		printf("Too low. Guess again.\n");
}
