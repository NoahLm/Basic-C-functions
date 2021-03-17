#include<stdio.h>

long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Write a number: ");
    scanf("%d",&n);
    printf("Factorial: %ld", multiplyNumbers(n));
    return 0;
}

long int multiplication(int n) {
    if (n >= 1)
        return n*multiplication(n - 1);
    else
        return 1;
}