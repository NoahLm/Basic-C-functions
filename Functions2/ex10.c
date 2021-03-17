#include<stdio.h>

int no, arr[20];

void evennumbers()
{
  printf("Enter the size of the array: ");
  scanf("%d", &no);

  printf("Write array numbers: \n");
  for(int i = 0; i < no; i++)
   {
      scanf("%d",&arr[i]);
   }

  printf("Even numbers in the array are: \n");
  for(int i = 0; i < no; i++)
   {
    if(arr[i] % 2 == 0)
    printf("%d ", arr[i]);
   }
}

int main()
{
  evennumbers();
  return 0;
}