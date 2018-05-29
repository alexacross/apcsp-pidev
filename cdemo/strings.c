#include <stdio.h>
int main()
{
char constantString[] = "abcdefghijklmnopqrstuvwxyz";

char capString[27];
char d ='A';
        for (int i = 0; i<27; i++)
        {
                capString[i] = d;
                d++; 
        }
capString[26] = '\0';

char togString[53];
	strcpy(togString, capString);
	strcat(togString, constantString); 

printf( "%s\n%s\n%s\n", constantString, capString, togString);

	if (strcmp(constantString, capString) == 0)
		printf("strings are identical\n");
	else
		printf("strings are different\n");

}
