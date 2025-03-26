#include<stdio.h>

 parouimpar(int b)
{
	if (b%2==0)
	 printf("O numero eh par");
	else 
	 printf("O numero eh impar");
}
int main ()
{
  int a;
  
  printf("Digite um numero: ");
  scanf("%d", &a);
  parouimpar(a);
}
