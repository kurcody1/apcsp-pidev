#include "studentfunc.h"
#include <stdio.h>




struct student
{
  char firstname[50];
  char lastname[50];
  char age[50];
  char studentid[50];
};

void addStudent (char i[256], char j[256], char input[256])
{
  printf("Enter %s:\n",i);
    fgets (input, 256, stdin);
    sscanf (input, "%s", j);
}

void printStudent (struct student* student, int n)
{
  printf ("Student %d",n);
  printf ("First name:%s\n",student->firstname);
  printf ("Last name:%s\n",student->lastname);
  printf ("Age:%s\n",student->age);
  printf ("Student ID:%s\n",student->studentid);
}
