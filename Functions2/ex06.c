#include <stdio.h>
#include <string.h>

int user, userlow, usermax;

void is_inrange(int user, int userlow, int usermax)
{
    if (user >= userlow && user <= usermax)
  {
    printf("It is in the given range");
  }
  else
  {
    printf("It is not in the given range");
  }
}

int main()
{
  printf("Write a the minimum number of a range: ");
  scanf("%d", &userlow);
  printf("Write a the minimum number of a range: ");
  scanf("%d", &usermax);
  printf("Write a number an lets see if it is in a given range: ");
  scanf("%d", &user);

  is_inrange(user, userlow, usermax);

  return 0;
}