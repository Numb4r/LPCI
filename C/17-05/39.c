#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int valor,cem,cinq,vint,dez,cinc;
  scanf("%d",&valor );
  printf("O valor de %d pode ser dividido em:\n",valor );
  cem = valor / 100;
  valor = valor%100;
  cinq = valor/50;
  valor = valor%50;
  vint = valor/20;
  valor = valor%20;
  dez = valor/10;
  valor = valor%10;
  cinc = valor/5;
  valor = valor%5;
  printf("100 - > %d \n50 - > %d \n20 - > %d \n10 - > %d \n5 - > %d \n1 - > %d"  ,cem,cinq,vint,dez,cinc,valor );


  return 0;
}
