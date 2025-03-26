#include<stdio.h>

int main ()
{
	float distancia, combustivel, valorcombustivel, consumo, valorgasto;
	
	printf("Digite a distancia total percorrida em KM\n:");
	scanf("%f", &distancia);
	printf("Digite o total de combustivel gasto em litros\n:");
	scanf("%f", &combustivel);
	printf("Digite o valor do litro de combustivel\n:");
	scanf("%f", &valorcombustivel);
	
	consumo = (distancia/combustivel);
	printf("O consumo medio do automovel foi de: %.2f\n", consumo);
	valorgasto = valorcombustivel * combustivel;
	printf("O valor gasto foi de: R$%.2f", valorgasto);
	
	if(consumo > 10) 
		printf("\nVeiculo economico");
	else 
	    printf("\nVeiculo nao economico");
	    
}
