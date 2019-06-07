#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    char frase[30],letra;
    fflush(stdin);
    fgets(frase,sizeof(frase),stdin);
    int aux = strlen(frase);
    printf("%d\n",aux );
    while (aux > -1) {
      letra = toupper(frase[aux]);
      if (letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U' && letra != '\0') {
        //printf("%c",frase[aux]);
        printf("#" );//Arrumar impressao de numero no final
      }else{
        printf("%c",frase[aux] );
      }
      aux--;
    }
  return 0;
}
