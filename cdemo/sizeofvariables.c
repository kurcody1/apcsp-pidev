#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'z';
  float c = 2002.6;
  double d = 2019.5;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

  printf("char b value: %c and size: %c bytes\n", b, sizeof(b));

  printf("float c value: %f and size: %f bytes\n", c, sizeof(c));

  printf("couble d value: %f and size: %f bytes\n", d, sizeof(d));
}

