#include <stdio.h>

 float areaofcircle(float r)
 {
        float x = 3.14 * (r * r);
        return x;

 }

int main()
{
        float y;
        float r;
	char input[64];
	int a;
	printf("What is the value of the radius?\n");
	fgets(input, 64, stdin);
	sscanf(input, "%d",&a);

		y = areaofcircle(a);
		printf("the area of the circle is %f\n", y);

}
