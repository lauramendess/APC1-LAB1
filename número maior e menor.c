#include<stdio.h>

int main ()
{
	int n1, n2, n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if (n1 < n2 && n1 < n3)
	{
		printf("%d, ", n1);
		
	    if (n2 < n3)
		{
	   	 printf("%d, %d\n", n2, n3);
	    }
	   else {
	     printf("%d, %d\n", n3, n2);
		}
	}
	else if (n2 < n1 && n2 < n3)
	{
		printf("%d, ", n2);
		
	    if(n1 < n3)
		{
	   	 printf("%d, %d\n", n1, n3);
	    }
	   else {
	     printf("%d, %d\n", n3, n1);
		}
	}
	else {
		printf("%d, ", n3);
		
	    if (n1 < n2) 
		{
	   	  printf("%d, %d\n", n1, n2);
	    }
	   else {
	   	  printf("%d, %d\n", n2, n1);
	   }
	}
	
}
