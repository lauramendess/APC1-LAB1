/*
Aluna: Laura Mendes Gon�alves
Universidade Federal de Catal�o
Data de cria��o: 05/07/2023
Ci�ncia da Computa��o, laborat�rio de Programa��o 1 e Algoritmo e Programa��o de Computadores 1
Matr�cula: 202301133
*/
#include<stdio.h>
#include<string.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char nome [40];
	
	printf("Digite o nome:\n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("1 - Nome digitado - %s\n", nome);
	printf("2 - Tudo min�sculo - %s\n", strlwr(nome)); //convertendo tudo para min�sculo
	printf("3 - Tudo mai�sculo - %s\n", strupr(nome)); //convertendo tudo para mai�sculo
	
	return 0;
}
