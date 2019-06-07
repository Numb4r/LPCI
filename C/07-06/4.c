#include <stdio.h>

#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char frase[30];
  fgets(frase,sizeof(frase),stdin);
  int i = strlen(frase);
  while (i > -1) {
    printf("%c",frase[i] );
    i--;
  }
  return 0;
}
