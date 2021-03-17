#include <stdio.h> 
#include <string.h>

int large(int x, int y, int z)
{
   if(x >= y && x >= z)
    return x;
   else if(y >= x && y >= z) 
    return y;
   else 
    return z;
}

int main()
{
   int x, y, z, lgst;

   printf("Write three numbers: \n");
   scanf("%d %d %d", &x, &y, &z);

   lgst = large(x, y, z);
   printf("The largest number is: %d", lgst);
   return 0;
}