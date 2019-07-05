#include <stdio.h>
#include <stdlib.h>

void troca(int* a,int* b){
  int aux = 0;
  aux = *a;
  *a = *b;
  *b = aux;
}


int main(int argc, char const *argv[]) {
  int a = 0,b = 0 ;
  scanf("%d",&a );
  scanf("%d",&b);
  troca(&a,&b);
  printf("a : %d  b : %d\n",a,b );

  return 0;
}
