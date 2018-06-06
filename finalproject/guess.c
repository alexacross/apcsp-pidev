#include <stdio.h>
#include "userguess.h"
#include "randomnumber.h"
#include "computerguess.h"

int main()
{
	int a;
	int i;
	randomnumber(&a);
	printf("Guess a number from 1-24\n");
	while (i != a){
		scanf("%d", &i);
		userguess(i,a);
	}
	int input;
        int guess = 25;
        printf("Choose a secret number from the following list: 1, 3, 6, 7, 12, 14, 15, 16, 25, 33, 34, 35, 37, 42, 43, 46, 48, or 49\n");
	while (guess != input){
		scanf("%d", &input);
		computerguess(input,guess);
	}
}
