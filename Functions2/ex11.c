#include <stdio.h>
 
int number, rem, sum = 0, i;

void perfect()
{
    printf("Write a number\n");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("Is perfect number");
    else
        printf("Is not a perfect number");
}


int main()
{
  perfect();
    return 0;
}