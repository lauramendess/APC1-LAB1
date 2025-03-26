/*
Aluna: Laura Mendes Gonçalves
Universidade Federal de Catalão
Data de criação: 21/08/2023. Data de modificação: 22/08/2023.
Ciência da Computação, laboratório de Programação 1 e Algoritmo e Programação de Computadores 1
Matrícula: 202301133
*/
#include <stdio.h>
#include <locale.h>

int main () {
	 setlocale(LC_ALL, "Portuguese"); //faz parte da biblioteca locale.h
	
	int matriz[3][4], dobroMatriz[3][4]; //declaração de variáveis. Já definindo o número de linhas e colunas da matriz.
	int i, j;
	  //pedindo e recebendo os valores da matriz que o usuário deseja:
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
		  printf("Digite o valor da posição [%d][%d] da matriz: ", i, j);
		  scanf("%d", &matriz[i][j]);
	  }
	}
     printf("\nA sua matriz 3x4 é:\n"); 
     //para exibir a matriz ao usuário:
	for (i = 0; i < 3; i++){ //
		for (j = 0; j < 4; j++){
		  printf("%d\t", matriz[i][j]);
	}
	printf("\n");
  }
    printf("\nO dobro da sua matriz 3x4 é:\n"); 
    //calculando o dobro de cada número da matriz inserida anteriormente pelo usuário:
   for (i = 0; i < 3; i++){ 
		for (j = 0; j < 4; j++){
		  printf("%d\t", matriz[i][j] * 2);
	}
	printf("\n");
 }
}
