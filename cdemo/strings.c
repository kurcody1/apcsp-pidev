#include <stdio.h>

int main(void)
{
  int i;
  char c = 'a';
  char d = 'A';
  char str1[56] = "abcdefghijklmnopqrstuvwxyz";
  char str2[26];

  for (i = 0; i < 26; i++)
  {
    str2[i] = c;
    c++;
  }

  if (strcmp(str1, str2) == 0)
  {
    printf("the strings are the same\n");
  }
  else
  {
    printf("the strings are not the same\n");
  }
  for (i=0; i<26; i++)
  {
    str1[i] = d;
    d++;
  }
  if (strcmp(str1,str2)==0)
  {
    printf("the strings are the same\n");
  }
  else
  {
    printf("the strings are not the same\n");
  }
  printf("%s\n",str1);
  printf ("%s\n",str2);

  strcat(str1, str2);
  printf("%s",str1);
}
