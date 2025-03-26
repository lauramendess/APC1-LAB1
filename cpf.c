/*
Aluna: Laura Mendes Gonçalves
Universidade Federal de Catalão
Data de criação: 26/06/2023. Data de modificação: 29/06/2023
Ciência da Computação, laboratório de Programação 1 e Algoritmo e Programação de Computadores 1
Matrícula: 202301133
*/
#include<stdio.h> //biblioteca de entrada e saída.
#include<locale.h> //biblioteca para permitir exibição de caracteres especiais.
#include<string.h> //biblioteca para manipular strings.

int main ()
{
   setlocale(LC_ALL, "Portuguese"); //faz parte da biblioteca locale.h

   int verificadordetamanho, verificandodigitoa = 0, verificandodigitob = 0, i, a; //declaração de variáveis.
   char cpf[12];

   printf("Informe o CPF, com apenas dígitos, para verificar se é válido ou inválido:\n");
   gets(cpf);
   verificadordetamanho = strlen(cpf);

   if (strlen(cpf) != 11) { //essa condição irá testar o tamanho dos dígitos inseridos pelo usuário, para conferir se é 11 mesmo, se for diferente de 11, o código será inválido.
   	 printf("O CPF é inválido!");
   	  return 1;
	} else
       for (i = 0; i < 11; i++) { //para verificar se todos os dígitos inseridos pelo usuário são números, caso não sejam, invalidará.
        if (cpf[i] != '0' && cpf[i] != '1' && cpf[i] != '2' && cpf[i] != '3' && cpf[i] != '4' && cpf[i] != '5' && cpf[i] != '6' && cpf[i] != '7' && cpf[i] != '8' && cpf[i] != '9'){
        printf("O CPF é inválido!");
        return 1;
	}
   }
   for (i = 0; i < 9; i++) { //testando o décimo dígito para verificar se é válido.
   	   verificandodigitoa += (cpf[i] - '0') * (10 - i);
       verificandodigitoa %= 11;

   	  if(verificandodigitoa < 2)
   	  	 verificandodigitoa = 0;
   	  else
   	     verificandodigitoa = 11 - verificandodigitoa;
   }

	if (cpf[9] - '0' != verificandodigitoa){
	  printf("O CPF é inválido!");
	  return 1;
	}


	for (i = 0; i < 10; i++) { //testando o décimo primeiro dígito caso o décimo dígito seja válido.
	 	verificandodigitob += (cpf[i] - '0') * (11 - i);
	 	verificandodigitob %= 11;

	   if(verificandodigitob < 2)
   	  	  verificandodigitob = 0;
   	   else
   	     verificandodigitob = 11 - verificandodigitob;
	}

   	  if (cpf[10] - '0' != verificandodigitob){
	  printf("O CPF é inválido!");
	  return 1;
	}

	 //irá verificar se o usuário digitou todos os números iguais, se não tiver digitado, o código será validado.
    for (a = 1; a < 11; a++) {
        if (cpf[a] != cpf[0]) {
            printf("O CPF é válido!");
            return 0;
		}
	 }
    printf("O CPF é inválido!"); //caso o último for não funcione, informará que é inválido.
}
