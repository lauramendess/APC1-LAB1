/*
Aluna: Laura Mendes Goncalves
Universidade Federal de Catalao
Data de criacao: 05/07/2023
Ciencia da Computacao, laboratorio de Programacao 1 e Algoritmo e Programacao de Computadores 1
Matricula: 202301133
*/
#include<stdio.h>
#include<string.h>

int main (){
	char nome[40];
	
	printf("Digite o nome:\n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("1 - Nome inserido - %s\n", nome);
	printf("2 - Tudo minusculo - %s\n", strlwr(nome)); //convertendo tudo para minusculo
	printf("3 - Tudo maiusculo - %s\n", strupr(nome)); //convertendo tudo para maiusculo
	
	return 0;
}
