#include <stdio.h>
#include <stdlib.h>
int menorNegativo(int vet[]) {
  int menorNegativo = -1;
  for (size_t i = 0; i < 10; i++) {
    vet[menorNegativo] > vet[i] ? menorNegativo = i : 1;
  }
  return menorNegativo;
}
void imprimirPares(int vet[]) {
  for (size_t i = 0; i < 10; i++) {
    if (vet[i]%2==0) {
      printf("%d\n",vet[i] );
    }
  }
}
int main(int argc, char const *argv[]) {

  int vet[10];
  for (size_t i = 0; i < 10; i++) {
    scanf("%d",&vet[i] );
  }
  printf("\n\n\n" );
  if (menorNegativo(vet) >= 0) {
    printf("O menor negativo e %d na posicao %d \n",vet[menorNegativo(vet)],menorNegativo(vet) );
  }else{
    printf("Nao tem numero negativo\n" );
  }
  imprimirPares(vet);
  return 0;
}
