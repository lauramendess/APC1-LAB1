/*
Aluna: Laura Mendes Gon�alves
Universidade Federal de Catal�o
Data de cria��o: 03/07/2023
Ci�ncia da Computa��o, laborat�rio de Programa��o 1 e Algoritmo e Programa��o de Computadores 1
Matr�cula: 202301133
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (){
 
 int i = 0;
 char palavra[21];
 
 printf("Digite o que deseja:\n");
 fgets(palavra, sizeof(palavra), stdin);
 printf("1 - %s\n", strlwr(palavra)); //strlwr ir� converter todas as letras digitadas para min�sculas, se todas j� forem min�sculas, apenas retornar� normalmente.
 
 //para converter a primeira letra para mai�scula, testando tamb�m se as outras s�o min�sculas, caso n�o seja, converter� para min�scula. 
 for (i = 0; i < 20; i++) {
 	if (i == 0 || palavra[i-1] == ' ') {
 	  palavra[i] = toupper(palavra[i]); //toupper � respons�vel por converter para mai�sculo.
   }
 	else {
 	  palavra[i] = tolower(palavra[i]); //tolower � respons�vel por converter para min�sculo.
   }
   	if (palavra[i] == '\0') //para fechar o loop caso haja menos de 20 caracteres.
    break;
 }
  printf("2 - %s", palavra);
  return 0;
}
 
