/*
Aluna: Laura Mendes Goncalves
Universidade Federal de Catalao
Data de criacao: 03/07/2023
Ciencia da Computacao, laboratorio de Programacao 1 e Algoritmo e Programacao de Computadores 1
Matricula: 202301133
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int i = 0;
  char palavra[21];

  printf("Digite o que deseja:\n");
  fgets(palavra, sizeof(palavra), stdin);
  printf("1 - %s\n", strlwr(palavra)); // strlwr ira converter todas as letras digitadas para minusculas, se todas ja forem minusculas, apenas retornara normalmente.

  // Para converter a primeira letra para maiuscula, testando tambem se as outras sao minusculas, caso nao seja, convertera para minuscula.
  for (i = 0; i < 20; i++) {
    if (i == 0 || palavra[i - 1] == ' ') {
      palavra[i] = toupper(palavra[i]); // toupper e responsavel por converter para maiusculo.
    } else {
      palavra[i] = tolower(palavra[i]); // tolower e responsavel por converter para minusculo.
    }
    if (palavra[i] == '\0') // Para fechar o loop caso haja menos de 20 caracteres.
      break;
  }
  printf("2 - %s", palavra);
  return 0;
}
