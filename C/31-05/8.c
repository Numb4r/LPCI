#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2

int verificar_primo(int n){
  int count = 0;
  if(n == 1)
    count++;
  for (size_t i = 2; i < (n/2)+1; i++) {
    if (n%i==0 ) {
      count++;
    }
  }
  return count > 0 ? 0 : 1;
}


int main(int argc, char const *argv[]) {
  int vet1[MAX],vet2[MAX];

  for (size_t i = 0; i < MAX; i++) {
      scanf("%d",&vet1[i] );
      vet2[i] = verificar_primo(vet1[i]) ? vet1[i] : 0;
  }
  printf("\n" );
  for (size_t i = 0; i < MAX; i++) {
    if(vet2[i] != 0 )
    printf(" - > %d\n",vet2[i] );
  }

  return 0;
}
