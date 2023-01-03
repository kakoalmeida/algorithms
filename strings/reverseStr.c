#include <stdio.h>

//Escreva um código-fonte para imprimir uma string na ordem inversa.

#define LENGTH 32

/*
void reverse(char* str) {

  int length = 0;
  // obtem o tamanho da string
  while (str[length] != '\0') {
    length++;
  }

  // troca os caracteres do inicio com os do final
  for (int i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }
}
*/

int main() {
  /*
  char str[] = "escola";
  reverse(str);
  printf("%s\n", str);
  return 0;
  */

    char buffer[LENGTH];

    printf("digite uma frase: ");
    fgets(buffer, LENGTH, stdin);

    printf("a frase digitada foi:\n");
    printf("%s\n", buffer);
    printf("a frase na ordem inversa e:\n");

    int i = 0;
    while(buffer[i] != '\0') {
        i++;
    }
    for(int j = i; j >= 0; j--) {
        printf("%c", buffer[j]);
    }

    return 0;
}

