#include<stdio.h>

  int fat (int x) {
  int fatorial;
  for (int l = 1; l >= x; --l) {
  	fatorial *= l;
  }
}

  int main() 
{
  int l; 
  printf("Digite um número inteiro para descobrir seu fatorial: ");
  scanf("%d", &l);
  fat (l);
 	printf("Fatorial = %d", fatorial);
}

