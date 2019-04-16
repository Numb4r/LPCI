#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int qntfumado = 0,ano = 0;
  float preco;
  scanf("%d %d %f",&qntfumado,&ano,&preco );
  printf("Total perdido porqque voce e um fumante %0.2f\n ",(qntfumado/20)*ano*365*preco );
  return 0;
}
