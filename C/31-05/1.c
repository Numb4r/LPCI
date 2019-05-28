#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int vet[10],vet2[10],vet3[20],aux;
  for (size_t i = 0; i < 10; i++) {
      scanf("%d",&vet[i] );
      vet3[i] = vet[i];
  }
  for (size_t j = 0; j < 10; j++) {
    scanf("%d",&vet2[j] );
    vet3[j+10] = vet2[j];
  }
  for (size_t i = 0; i < 20; i++) {
    for (size_t j = 0; j < i; j++) {
      if (vet3[i] > vet3[j]) {
        aux = vet3[i];
        vet3[i] = vet3[j];
        vet3[j] = aux;
      }
    }
  }
  for (size_t i = 0; i <20; i++) {
    printf("%d ",vet3[i] );
  }
  return 0;
}
