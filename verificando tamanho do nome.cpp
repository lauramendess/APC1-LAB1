#include<stdio.h>
#include<string.h>
#include<conio.h>

main(){
	char nome [30];
	int i = 0;
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	while(nome[i] != '\0'){
		printf("%c", nome[i]);
		i++;
	}
	printf("\nO tamanho da string eh: %d", i);
	getch();
}
