#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int d;

  a = 2;
  c = a + b;
  printf("c is assigned to the sum of a (%d) and b (%d), %d.\n", a, b, c);

  d = c;
  c = a;
  a = d;
  printf("c and a are now switched. c is %d and a is %d\n", c, a);

}
