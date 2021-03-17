#include<stdio.h>
#include<string.h>

int length, pos1, pos2;
char user[20];

void palindrome()
{
  printf("Write a word and lets see if its a palindrome: ");
  scanf("%s", user);
  length = strlen(user);

  pos1 = 0;
  pos2 = length - 1;
  while (pos2 > pos1)
  {
    if (user[pos1] != user[pos2])
    {
      printf("0");
    }
    else if (user[pos1] == user[pos2])
    {
      printf("1");
    }
    pos1 += 1;
    pos2 -= 1;
  } 
}