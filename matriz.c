/*
Aluna: Laura Mendes Gon�alves
Universidade Federal de Catal�o
Data de cria��o: 21/08/2023. Data de modifica��o: 22/08/2023.
Ci�ncia da Computa��o, laborat�rio de Programa��o 1 e Algoritmo e Programa��o de Computadores 1
Matr�cula: 202301133
*/
#include <stdio.h>
#include <locale.h>

int main () {
	 setlocale(LC_ALL, "Portuguese"); //faz parte da biblioteca locale.h
	
	int matriz[3][4], dobroMatriz[3][4]; //declara��o de vari�veis. J� definindo o n�mero de linhas e colunas da matriz.
	int i, j;
	  //pedindo e recebendo os valores da matriz que o usu�rio deseja:
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
		  printf("Digite o valor da posi��o [%d][%d] da matriz: ", i, j);
		  scanf("%d", &matriz[i][j]);
	  }
	}
     printf("\nA sua matriz 3x4 �:\n"); 
     //para exibir a matriz ao usu�rio:
	for (i = 0; i < 3; i++){ //
		for (j = 0; j < 4; j++){
		  printf("%d\t", matriz[i][j]);
	}
	printf("\n");
  }
    printf("\nO dobro da sua matriz 3x4 �:\n"); 
    //calculando o dobro de cada n�mero da matriz inserida anteriormente pelo usu�rio:
   for (i = 0; i < 3; i++){ 
		for (j = 0; j < 4; j++){
		  printf("%d\t", matriz[i][j] * 2);
	}
	printf("\n");
 }
}
