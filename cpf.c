/*
Aluna: Laura Mendes Goncalves
Universidade Federal de Catalao
Data de criacao: 26/06/2023. Data de modificacao: 29/06/2023
Ciencia da Computacao, laboratorio de Programacao 1 e Algoritmo e Programacao de Computadores 1
Matricula: 202301133
*/
#include<stdio.h> //biblioteca de entrada e saida.
#include<string.h> //biblioteca para manipular strings.

int main ()
{
	int verificandodigitoa = 0, verificandodigitob = 0, i, a; //declaracao de variaveis.
	char cpf[12];

	printf("Informe o CPF, com apenas digitos, para verificar se e valido ou invalido:\n");
	gets(cpf);

	if (strlen(cpf) != 11) { //essa condicao ira testar o tamanho dos digitos inseridos pelo usuario, para conferir se e 11 mesmo, se for diferente de 11, o codigo sera invalido.
		printf("O CPF e invalido!");
		return 1;
	} else
		 for (i = 0; i < 11; i++) { //para verificar se todos os digitos inseridos pelo usuario sao numeros, caso nao sejam, invalidara.
		  	if (cpf[i] != '0' && cpf[i] != '1' && cpf[i] != '2' && cpf[i] != '3' && cpf[i] != '4' && cpf[i] != '5' && cpf[i] != '6' && cpf[i] != '7' && cpf[i] != '8' && cpf[i] != '9'){
		  		printf("O CPF e invalido!");
		  		return 1;
		}
	}
	for (i = 0; i < 9; i++) { //testando o decimo digito para verificar se e valido.
		verificandodigitoa += (cpf[i] - '0') * (10 - i);
	}	 
	
	verificandodigitoa %= 11;
	
	if(verificandodigitoa < 2)
		verificandodigitoa = 0;
	else
		verificandodigitoa = 11 - verificandodigitoa;

	if (cpf[9] - '0' != verificandodigitoa){
	  printf("O CPF e invalido!");
	  return 1;
	}


	for (i = 0; i < 10; i++) { //testando o decimo primeiro digito caso o decimo digito seja valido.
		verificandodigitob += (cpf[i] - '0') * (11 - i);
	}
	
	verificandodigitob %= 11;
	
	if(verificandodigitob < 2)
		verificandodigitob = 0;
	else
		verificandodigitob = 11 - verificandodigitob;
	
	if (cpf[10] - '0' != verificandodigitob){
	  printf("O CPF e invalido!");
	  return 1;
	}

	 //ira verificar se o usuario digitou todos os numeros iguais, se nao tiver digitado, o codigo sera validado.
	for (a = 1; a < 11; a++) {
		  if (cpf[a] != cpf[0]) {
				printf("O CPF eh valido!");
				return 0;
		}
	}
	 printf("O CPF e invalido!"); //caso o ultimo for nao funcione, informara que e invalido.
}
