#include <stdlib.h>
#include <time.h>

void randomnumber(int* a)
{
	srand(time(NULL));
	*a = rand() % 24+1;
}

