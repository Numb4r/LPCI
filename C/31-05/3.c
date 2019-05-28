#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main(int argc, char const *argv[]) {
  int vet1[MAX],vet2[MAX],vet3[MAX];
  printf("Primeiro vetor\n" );
  for (size_t i = 0; i < MAX ; i++) {
    scanf("%d",&vet1[i] );
  }
  printf("Segundo vetor\n" );
  for (size_t i = 0; i < MAX ; i++) {
    scanf("%d",&vet2[i] );
  }

  for (size_t i = 0; i < MAX ; i++) {
    vet3[i] = vet1[i]*vet2[i];
    printf("\n> %d",vet3[i] );
  }
  return 0;
}
