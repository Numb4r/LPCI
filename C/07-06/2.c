#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char frase[30],letra;
  scanf("%s",frase );
  int i = 0,qntconsoantes = 0;
  while (frase[i] != '\0') {
    letra = toupper(frase[i]);
    //printf("%c\n",letra);
    if (letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U') {
      qntconsoantes++;
    }
    i++;
  }
  printf("%d\n",qntconsoantes );
  return 0;
}
