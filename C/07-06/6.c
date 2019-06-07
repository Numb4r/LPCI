#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char frase[30];
  fgets(frase,sizeof(frase),stdin);
  int aux = 0;
while (frase[aux] != '\0') {
  if (frase[aux] == ' ') {
    printf("\n" );
  }else{
    printf("%c",frase[aux] );
  }
  aux ++;
}
  return 0;
}
