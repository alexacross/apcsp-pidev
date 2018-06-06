#include <stdio.h>

int main(void)
{
	int i;
	int input;
	int guess;
	printf("Choose a secret number from the following list: 1, 3, 6, 7, 12, 14, 15, 16, 25, 33, 34, 35, 37, 42, 43, 46, 48, or 49\n");
	scanf("%d",&input);
	int* ptrguess = &guess;
	guess = 25;
	if (input == 1 || input == 3)
	{
	  	 while ( input != guess )
                        {
                                if ( input < guess )
                                {
                                        *ptrguess = ( guess / 2 );
                                }
                                else if ( input > guess )
                                {
                                        *ptrguess = ( guess + ((50 - guess) / 2) );
                                }
                                printf("guess now equal to %d\n", guess);
                        }
		printf("The secret number is %d\n", guess);
	}
	else
	{
		printf("Please select a number from the list\n");
	}
}

