#include <stdio.h>
#include "computerguess.h"

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    printf("%s : expected an argument, please enter an integer\n", argv[0]);
    return 1;
  }

  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (arg1 == 1 || arg1 == 3 || arg1 == 6 || arg1 == 7 || arg1 == 12 || arg1 == 14 || arg1 == 15 || arg1 == 16 || arg1 == 25 || arg1 == 33 || arg1 == 34 || arg1 == 35 || arg1 == 37 || arg1 == 42 || arg1 == 43 || arg1 == 46 || arg1 == 48 || arg1 == 49);
  {
        int guess = 25;
	int input = arg1;
        while (guess != arg1)
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
