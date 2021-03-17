#include <stdio.h>
#include <string.h>

int usarr[] = {92, 237, 2311, 18340};
int len = sizeof(usarr) / sizeof(usarr[0]);

int addition(int usarr[], int len)
{
    int sumno = 0;
 
    for (int i = 0; i < len; i++)
    {sumno += usarr[i];}
 
    return sumno;
}
 
int main()
{
    printf("Sum of the list is %d", addition(usarr, len));
    return 0;
}