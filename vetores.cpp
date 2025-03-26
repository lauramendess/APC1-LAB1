#include<stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    int i;
    int v1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int v2[10];
    
    printf("Os valores do vetor 1 sao: \n");
    for (i = 0; i < 10; i++){
    	printf("%d\n", v1[i]);
	}
	
	printf("Digite 10 valores para o vetor V2: \n");
    for (i = 0; i < 10; i++){
     printf("Vetor 2 [%d] = ", i);
	 scanf("%d", &v2[i]);	
	}
	
	printf("Os valores dos vetores V2 sao: \n");
	for (i = 0; i < 10; i++)
	 printf("%d\n", v2[i]); 
	 
	printf("As somas das posicoes dos vetores sao: \n");
	for (i = 0; i < 10; i++)
	 printf("%d\n", v1[i] + v2[i]);
}
