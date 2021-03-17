#include <stdio.h>

void primes()
{
  int no, i, prov = 0;
  printf("Write a number: ");
  scanf("%d", &no);

  for (i = 2; i <= no / 2; ++i) {
    if (no % i == 0) {
      prov = 1;
      break;
    }
  }

  if (no == 1) {
    printf("1 is a prime number.");
  } 
  else {
    if (prov == 0)
      printf("%d is a prime number.", no);
    else
      printf("%d is not a prime number.", no);
  }
}


int main() {

  primes();

  return 0;
}