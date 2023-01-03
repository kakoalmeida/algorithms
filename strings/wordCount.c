#include <stdio.h>

//Escreva um código-fonte para contar o número total de palavras em uma string.

#define LENGTH 100

int main() {
  char str[LENGTH];
  int count = 0;

  int in_word = 0; // indicador de que esta em uma palavra

  printf("digite uma frase: ");
  fgets(str, LENGTH, stdin);

  for (int i = 0; str[i] != '\0'; i++) {
    // se nao estiver dentro de uma palavra muda o indicador para 1, que indica
    // que esta dentro de uma palavra
    if (!in_word && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
      in_word = 1;
      count++;
    }
    // se sair da palavra o indicador volta a 0
    else if (in_word && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) {
      in_word = 0;
    }
  }

  printf("a frase digitada tem %d palavras\n", count);

  return 0;
}

