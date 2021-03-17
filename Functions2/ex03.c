#include <stdio.h>

int main()
{
    int i;
    int data[] = {1, 2, 3, 4, 5};

    for(i = 0; i < 5; i++) 
    {data[i] *= data[i];}

    printf("%d", data[i]);
  return 0;
}