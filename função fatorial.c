#include<stdio.h>

int fat (int x) {
  int fatorial = 1;

  for (int l = x; l >= 1; --l) {
    fatorial *= l;
  }
  return fatorial;
}


int main() 
{
  int l; 
  
  printf("Digite um numero inteiro para descobrir seu fatorial: ");
  scanf("%d", &l);

  int fatorial = fat(l);

 	printf("Fatorial = %d", fatorial);
}

