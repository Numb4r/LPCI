#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(int argc, char const *argv[]) {
  int vet1[MAX],tam = 0;
  for (size_t i = 0; i < MAX ; i++) {
    scanf("%d",&vet1[i]);
    if(vet1[i] > 0)

      tam++;
  }
  printf("\n" );
  int vet2[tam],aux = 0;
  for (size_t i = 0; i < MAX; i++) {
    if (vet1[i] > 0) {
      vet2[aux] = vet1[i];
      printf("%d - > %d\n",aux,vet2[aux] );
      aux++;
    }
  }
  return 0;
}
