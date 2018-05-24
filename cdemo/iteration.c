#include <stdio.h>

int main ()
{
 int x = 11;
 int a;
	for ( int a = 1; a <= 100; a++)
	{
		if ((a % x) == 0)
			printf("a is equal to %d\n", a);
	}
}
