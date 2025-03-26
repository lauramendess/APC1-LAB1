#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main (){
	float num, rq;
	float a, b, c;
	
	printf("Digite um numero para saber sua raiz quadrada: \n");
	scanf("%f", &num);
	rq = sqrt(num);
	printf("A raiz quadrada do numero %.1f eh: %.1f \n\n", num, rq);
	
	a = 3; b = 2;
	c = pow (a,b);
	printf("\nO valor de %.1f elevado a %.1f = %.1f \n", a, b, c);
	
	system("pause");
}
