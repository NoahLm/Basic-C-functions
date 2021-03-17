#include <stdio.h>
#include <string.h>
 
void reverse()
{
  char userstr[20], temp;
  int length, usefl, i;

  printf("Write a string to reverse : ");
  scanf("%s", userstr);
  length = strlen(userstr);

  usefl = length - 1;
    
for(i = 0 ; i < usefl ; i++)
{
  temp = userstr[i];
  userstr[i] = userstr[usefl];
  userstr[usefl] = temp;
  usefl--;
}
 
   printf("The reversed string is: %s", userstr);
}


int main(void)
{
  reverse();
  return 0;
}