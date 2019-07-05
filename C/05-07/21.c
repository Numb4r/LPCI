#include <stdlib.h>
#include <stdio.h>

int negativos(float vet[],int n){
  int aux = 0;
  for (size_t i = 0; i < n; i++) {
    aux = vet[i] < 0 ? aux+1 : aux;
  }
  return aux;
}


int main(int argc, char const *argv[]) {
  int n = 0;
  scanf("%d",&n );
  float array[n];
  for (size_t i = 0; i < n; i++) {
    printf("%f\n",array[i] );
  }
  printf("%d\n",negativos(array,n) );
  return 0;
}
