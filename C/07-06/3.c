#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int qntA = 0,i = 0;
  char frase[30];
  fgets(frase,sizeof(frase),stdin);
  while (frase[i] != '\0') {
    if (frase[i] == 'a'  || toupper(frase[i])== 'A') {
      qntA++;
    }
    i++;
  }
  printf("%d\n",qntA );
  return 0;
}
