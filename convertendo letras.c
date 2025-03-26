/*
Aluna: Laura Mendes Gonçalves
Universidade Federal de Catalão
Data de criação: 03/07/2023
Ciência da Computação, laboratório de Programação 1 e Algoritmo e Programação de Computadores 1
Matrícula: 202301133
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (){
 
 int i = 0;
 char palavra[21];
 
 printf("Digite o que deseja:\n");
 fgets(palavra, sizeof(palavra), stdin);
 printf("1 - %s\n", strlwr(palavra)); //strlwr irá converter todas as letras digitadas para minúsculas, se todas já forem minúsculas, apenas retornará normalmente.
 
 //para converter a primeira letra para maiúscula, testando também se as outras são minúsculas, caso não seja, converterá para minúscula. 
 for (i = 0; i < 20; i++) {
 	if (i == 0 || palavra[i-1] == ' ') {
 	  palavra[i] = toupper(palavra[i]); //toupper é responsável por converter para maiúsculo.
   }
 	else {
 	  palavra[i] = tolower(palavra[i]); //tolower é responsável por converter para minúsculo.
   }
   	if (palavra[i] == '\0') //para fechar o loop caso haja menos de 20 caracteres.
    break;
 }
  printf("2 - %s", palavra);
  return 0;
}
 
