#include <stdio.h>
 
char string[100];
int counter1,counter2;
int counter;

void upperandlower()
{
    counter1=counter2=0;
 
    printf("Enter a string: ");
    scanf("%s",string);
 
    for(counter=0;string[counter]!=NULL;counter++){
 
        if(string[counter]>='A' && string[counter]<='Z')
            counter2++;
        else if(string[counter]>='a' && string[counter]<='z')
            counter1++;   
    }
 
    printf("Upper case characters: %d, Lower Case characters: %d",counter1,counter2);
}


int main()
{ 
    upperandlower();
    return 0;
}