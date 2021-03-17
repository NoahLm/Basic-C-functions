#include <stdio.h>
#include <string.h>
 
char userstr1[50], userstr2[50], temp;
int length1, length2;
int samelength(length1, length2)
{
  if (length1 == length2)
  {return 0;}
  else
  {return 1;}
}


int main(void)
{
  printf("Write a string : ");
  scanf("%s", userstr1);

  printf("Write a string : ");
  scanf("%s", userstr2);

  length1 = strlen(userstr1);
  length2 = strlen(userstr2);

  printf("%d", samelength(length1,length2));
  return 0;
}