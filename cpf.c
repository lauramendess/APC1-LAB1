/*
Aluna: Laura Mendes Gon�alves
Universidade Federal de Catal�o
Data de cria��o: 26/06/2023. Data de modifica��o: 29/06/2023
Ci�ncia da Computa��o, laborat�rio de Programa��o 1 e Algoritmo e Programa��o de Computadores 1
Matr�cula: 202301133
*/
#include<stdio.h> //biblioteca de entrada e sa�da.
#include<locale.h> //biblioteca para permitir exibi��o de caracteres especiais.
#include<string.h> //biblioteca para manipular strings.

int main ()
{
   setlocale(LC_ALL, "Portuguese"); //faz parte da biblioteca locale.h

   int verificadordetamanho, verificandodigitoa = 0, verificandodigitob = 0, i, a; //declara��o de vari�veis.
   char cpf[12];

   printf("Informe o CPF, com apenas d�gitos, para verificar se � v�lido ou inv�lido:\n");
   gets(cpf);
   verificadordetamanho = strlen(cpf);

   if (strlen(cpf) != 11) { //essa condi��o ir� testar o tamanho dos d�gitos inseridos pelo usu�rio, para conferir se � 11 mesmo, se for diferente de 11, o c�digo ser� inv�lido.
   	 printf("O CPF � inv�lido!");
   	  return 1;
	} else
       for (i = 0; i < 11; i++) { //para verificar se todos os d�gitos inseridos pelo usu�rio s�o n�meros, caso n�o sejam, invalidar�.
        if (cpf[i] != '0' && cpf[i] != '1' && cpf[i] != '2' && cpf[i] != '3' && cpf[i] != '4' && cpf[i] != '5' && cpf[i] != '6' && cpf[i] != '7' && cpf[i] != '8' && cpf[i] != '9'){
        printf("O CPF � inv�lido!");
        return 1;
	}
   }
   for (i = 0; i < 9; i++) { //testando o d�cimo d�gito para verificar se � v�lido.
   	   verificandodigitoa += (cpf[i] - '0') * (10 - i);
       verificandodigitoa %= 11;

   	  if(verificandodigitoa < 2)
   	  	 verificandodigitoa = 0;
   	  else
   	     verificandodigitoa = 11 - verificandodigitoa;
   }

	if (cpf[9] - '0' != verificandodigitoa){
	  printf("O CPF � inv�lido!");
	  return 1;
	}


	for (i = 0; i < 10; i++) { //testando o d�cimo primeiro d�gito caso o d�cimo d�gito seja v�lido.
	 	verificandodigitob += (cpf[i] - '0') * (11 - i);
	 	verificandodigitob %= 11;

	   if(verificandodigitob < 2)
   	  	  verificandodigitob = 0;
   	   else
   	     verificandodigitob = 11 - verificandodigitob;
	}

   	  if (cpf[10] - '0' != verificandodigitob){
	  printf("O CPF � inv�lido!");
	  return 1;
	}

	 //ir� verificar se o usu�rio digitou todos os n�meros iguais, se n�o tiver digitado, o c�digo ser� validado.
    for (a = 1; a < 11; a++) {
        if (cpf[a] != cpf[0]) {
            printf("O CPF � v�lido!");
            return 0;
		}
	 }
    printf("O CPF � inv�lido!"); //caso o �ltimo for n�o funcione, informar� que � inv�lido.
}
