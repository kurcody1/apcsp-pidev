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
    printf("a is not equal to b \n");
  }
  else
  {
    printf("a is equal to b\n");
  }

  if (a > b)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a and b are both 0\n");
  }
  else
  {
    printf("either a, or b, or both are not 0\n");
  }

  if (a == 0 || b==0)
  {
    printf("either a or b are 0\n");
  }
  else
  {
    printf("both a and b are not 0\n");
  }

  if (!(a == 0))
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }
}
