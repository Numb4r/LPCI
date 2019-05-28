#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(int argc, char const *argv[]) {
  int vet[MAX];
  for (size_t i = 0; i < MAX; i++) {
    scanf("%d",&vet[i] );
  }
  printf("\n" );
  for (size_t i = 0; i < MAX; i++) {
    if(vet[i]>=0)
      printf("%d\n",vet[i] );
  }
  return 0;
}
