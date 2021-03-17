#include<stdio.h>
#include<string.h>

char user1[50], user2[50];

void strdifferences()
{
   printf("Write 2 phrases and lets see if they are equal. If not, which is the first difference.\n\n");
  
  printf("Write the first phrase: ");
  scanf("%s", user1);
  printf("\nWrite the second phrase you want to verify\nif it has the same elements: ");
  scanf("%s", user2);

  if ((strcmp(user1, user2) == 0))
    {printf("0");}
  
  else if (((strcmp(user1, user2) != 0)))
    {
      for (int i = 0; i < 50; i++)
        {
          if (user1[i] != user2[i]){
            printf("The first difference is:\n\n");
            printf("How it is in the first phrase: %c\n",user1[i]);
            printf("How it is in the second phrase: %c",user2[i]);
            break;}
        }
    } 
}

int main(void) {
  
  strdifferences();

  return 0;
    }