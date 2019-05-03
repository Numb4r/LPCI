#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int valorcompra,valorpago,troco,cem,dez;
  scanf("%d %d",&valorcompra,&valorpago );

  troco = valorpago - valorcompra;
  if (troco  < 0 ){
    printf("Compra nao efetuada\n");
    exit(-2);
  }
  cem = troco / 100;
  troco %= 100;
  dez = troco / 10;
  troco %= 10;
  printf("100 : %d\n10 : %d\n1 : %d",cem,dez,troco );
  return 0;
}
