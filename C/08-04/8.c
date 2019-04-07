#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int qnt1,qnt2,ipi;
  float v1,v2,aux;

  scanf("%d",&qnt1 );
  scanf("%d",&qnt2 );
  scanf("%d",&ipi );
  scanf("%f",&v1 );
  scanf("%f",&v2 );
  aux = (qnt1*v1)+(qnt2*v2);
  printf("%f\n",aux+aux*ipi/100 );
  return 0;

}
