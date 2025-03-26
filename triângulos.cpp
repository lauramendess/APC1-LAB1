#include<stdio.h>

int main (){
	int num1, num2, num3;
	
	printf("Digite o primeiro valor inteiro: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo valor inteiro: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro valor inteiro: ");
	scanf("%d", &num3);
	
	// Verifica se os valores formam um triângulo válido
	if ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1)) {
		if ((num1 == num2) && (num2 == num3)) {
			printf("O triangulo eh equilatero!");
		}
		else if ((num1 == num2) || (num1 == num3) || (num2 == num3)) {
			printf("O triangulo eh isosceles!");
		}
		else {
			printf("O triangulo eh escaleno!");
		}
	} else {
		printf("Os valores fornecidos nao formam um triangulo!");
	}
}
