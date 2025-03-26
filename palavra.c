#include<stdio.h>
#include<ctype.h>

int main (){
 
 int i = 0;
 char palavra[21];
 
 printf("Digite uma palavra:\n");
 fgets(palavra, sizeof(palavra), stdin);
 
 for (i = 0; i < 21; i++) {
 	  palavra[i] = toupper(palavra[i]); 
   }
   printf("%s", palavra);
   
 for (i = 0; i < 21; i++) {
      palavra[i] = tolower(palavra[i]); 
   }
   printf("%s", palavra);
   
  return 0;
}
 
