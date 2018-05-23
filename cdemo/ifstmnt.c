#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (a != b)
  {
    printf("a is not b\n");
  }
  else
  {
    printf("a is b\n");
  }
    
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }
  if (a >= b)
  {
    printf("a is equal to or greater than b\n");
  }
  else
  {
    printf("a is not equal to or greater than b\n");
  }
  if (a == 0 && b == 1)
  {
    printf("a is 0 and b is 1\n");
  }
  else
  {
    printf("a is not 0 and b is not 1\n");
  }
  if (a == 0 || b == 1)
  {
    printf("a is 0 or b is 1\n");
  }
  else
  {
    printf("a is not 0 or b is not 1\n");
  }
  if (a != 0)
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }
}
