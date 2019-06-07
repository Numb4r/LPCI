#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char frase[30] = "",letra;
  int qntvogais = 0,i = 0;
  fgets(frase,sizeof(frase),stdin);
  while (frase[i] != '\0') {
    letra = toupper(frase[i]);
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
      qntvogais++;
    i++;
  }
  printf("\n%d",qntvogais );
  return 0;
}
