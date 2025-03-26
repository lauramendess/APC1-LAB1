#include<stdio.h>

int main ()
{
  float num1, num2;
  int novaop;
  char operacao;
  
  do {
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  scanf("%c", &operacao);
  printf("Escolha a operacao que deseja realizar:\n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
  scanf("%c", &operacao);
  
  switch(operacao)
  { 
    case '1': printf("%.2f + %.2f = %.2f", num1, num2, num1+num2); break;
   
    case '2': printf("%.2f - %.2f = %.2f", num1, num2, num1-num2); break;
    
    case '3': printf("%.2f * %.2f = %.2f", num1, num2, num1*num2); break;
    
    case '4': printf("%.2f / %.2f = %.2f", num1, num2, num1/num2); break;
    
    default: printf("Opcao invalida!"); break;
  }
   printf("\nDigite 0 para realizar uma nova operacao!\n");
   scanf("%d", &novaop);
  } while (novaop==0);
  return 0;
}
