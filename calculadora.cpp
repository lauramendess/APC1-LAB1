#include<stdio.h>
#include<locale.h>

int main ()
{
   setlocale(LC_ALL, "Portuguese");
   float num1, num2;
   int novaop;
   char operacao;
   
   do {
   printf("Digite o primeiro número: ");
   scanf("%f", &num1);
   printf("Digite o segundo número: ");
   scanf("%f", &num2);
   scanf("%c", &operacao);
   printf("Escolha a operação que deseja realizar:\n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n");
   scanf("%c", &operacao);
   
   switch(operacao)
   { 
     case '1': printf("%.2f + %.2f = %.2f", num1, num2, num1+num2); break;
    
     case '2': printf("%.2f - %.2f = %.2f", num1, num2, num1-num2); break;
     
     case '3': printf("%.2f * %.2f = %.2f", num1, num2, num1*num2); break;
     
     case '4': printf("%.2f / %.2f = %.2f", num1, num2, num1/num2); break;
     
     default: printf("Opção inválida!"); break;
   }
    printf("\nDigite 0 para realizar uma nova operação!\n");
    scanf("%d", &novaop);
  } while (novaop==0);
  return 0;
}
