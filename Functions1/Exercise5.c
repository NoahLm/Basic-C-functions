#include <stdio.h>
#include <string.h>

char string[100], vow[100];
int i, prov = 0;

int vowels(char vow)
{
  if (vow == 'a' || vow == 'A' || vow == 'e' || vow == 'E' || vow == 'i' || vow == 'I' || vow == 'o' || vow == 'O' || vow == 'u' || vow == 'U')
    return 1;

  return 0;
}

int main()
{
  printf("Write a phrase and see how it look with only consonants\n");
  scanf("%s", string);

  for (i = 0; string[i] != '\0'; i++) 
  {
    if (vowels(string[i]) == 0) 
    {
      vow[prov] = string[i];
      prov++;
    }
  }

  vow[prov] = '\0';

  strcpy(string, vow);

  printf("Result: %s\n", string);

  return 0;
}