#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float indice;
  scanf("%f",&indice );
  if (indice >= 0.3 ) {
    printf("Industrias do primeiro grupo" );
    if (indice >= 0.4) {
      printf(", do segundo grupo");
      if (indice >= 0.5) {
      }
      printf(" e do terceiro grupo");
    }
    printf(" devem suspender as atividades\n" );
  }else{
    printf("Indices aceitaveis\n" );
  }
  return 0;
}
