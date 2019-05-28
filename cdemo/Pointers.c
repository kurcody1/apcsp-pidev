#include <stdio.h>

int main()
{
int a;
float d = 10;
float e = 20;

float* dptr = &d;
float* eptr = &e;
float tmp;

int* ptrtoa;
ptrtoa = &a;
a = 5;
printf("The value of a is %d\n", a);
*ptrtoa = 6;
printf("The value of a is %d\n", a);
printf("The value of ptrtoa is %d\n", ptrtoa);
printf("It stores the value %d\n", *ptrtoa);
printf("The address of a is %d\n", &a);
printf("The value of d is %f and the value of e is %f\n",d,e);
printf("The address of d is %d and the address of e is %d\n",&d,&e);
tmp = *dptr;
d = *eptr;
e = *dptr;
printf("The value of d is now %f and the value of e is now %f\n",d,tmp);
}
