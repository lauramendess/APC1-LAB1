/*
Aluna: Laura Mendes Gonçalves
Universidade Federal de Catalão
Data de criação: 05/07/2023
Ciência da Computação, laboratório de Programação 1 e Algoritmo e Programação de Computadores 1
Matrícula: 202301133
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
	printf("2 - Tudo minúsculo - %s\n", strlwr(nome)); //convertendo tudo para minúsculo
	printf("3 - Tudo maiúsculo - %s\n", strupr(nome)); //convertendo tudo para maiúsculo
	
	return 0;
}
