#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(int argc, char const *argv[]) {
  int vet1[MAX],vet2[MAX],soma = 0;
  printf("Primeiro vetor\n");
  for (size_t i = 0; i < MAX; i++) {
    scanf("%d",&vet1[i] );
  }
  printf("Segundo vetor\n");
  for (size_t i = 0; i < MAX; i++) {
    scanf("%d",&vet2[i] );
  }
  printf("Subtracoes \n");
  for (size_t i = 0; i < MAX; i++) {
    printf("%d\n",vet1[i]-vet2[MAX-i - 1]);
    soma += (vet1[i] - vet2[MAX-i - 1]);
  }
  printf("Soma : %d\n",soma );
  return 0;
}
