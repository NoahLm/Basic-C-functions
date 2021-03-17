#include <stdio.h>
 
int main()
{
	int arr[10], FreqArr[10], i, j, Count, Size;
	
	printf("\n Ingrese numero de elementos a comparar: \n");
	scanf("%d", &Size);
	
	printf("Ingrese los elementos\n");
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}     
 
	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
		}
	}

 	printf("Lista de elementos diferentes: \n");
 	for (i = 0; i < Size; i++)
  	{
  		if(FreqArr[i] == 1)
  		{
  			printf("%d\n", arr[i]);
		}		
  	}	     
 	return 0;
}