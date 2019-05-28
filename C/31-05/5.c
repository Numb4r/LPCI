#include <stdio.h>
#include <stdlib.h>
#define MAX 30
int main(int argc, char const *argv[]) {
  int vet1[MAX],vet2[MAX];
  for (size_t i = 0; i < MAX; i++) {
    scanf("%d",&vet1[i]);
    vet2[i] = vet1[i] != 0 ? vet1[i] : 1;
  }
  for (size_t i = 0; i < MAX; i++) {
    printf("\n%d",vet2[i] );
  }
  return 0;
}
