#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void imprimi(int vet[],int tam){
  for (size_t i = 0; i < tam; i++) {
    printf("%d\n",*(vet+i) );
  }
}
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int vet[10];
  for (size_t i = 0; i < sizeof(vet)/sizeof(int); i++) {
    *(vet+i) = rand () % 100;
  }
  imprimi(vet,sizeof(vet)/sizeof(int));
  return 0;
}
