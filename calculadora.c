#include<stdio.h>
#include<locale.h>

int main ()
{
   setlocale(LC_ALL, "Portuguese");
   float num1, num2;
   int novaop;
   char operacao;
   
   do {
   printf("Digite o primeiro n�mero: ");
   scanf("%f", &num1);
   printf("Digite o segundo n�mero: ");
   scanf("%f", &num2);
   scanf("%c", &operacao);
   printf("Escolha a opera��o que deseja realizar:\n 1 - Soma\n 2 - Subtra��o\n 3 - Multiplica��o\n 4 - Divis�o\n");
   scanf("%c", &operacao);
   
   switch(operacao)
   { 
     case '1': printf("%.2f + %.2f = %.2f", num1, num2, num1+num2); break;
    
     case '2': printf("%.2f - %.2f = %.2f", num1, num2, num1-num2); break;
     
     case '3': printf("%.2f * %.2f = %.2f", num1, num2, num1*num2); break;
     
     case '4': printf("%.2f / %.2f = %.2f", num1, num2, num1/num2); break;
     
     default: printf("Op��o inv�lida!"); break;
   }
    printf("\nDigite 0 para realizar uma nova opera��o!\n");
    scanf("%d", &novaop);
  } while (novaop==0);
  return 0;
}
