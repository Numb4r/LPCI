#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int vet[15],maior = 0,menor = 0;
  for (size_t i = 0; i < 15; i++) {
    scanf("%d",&vet[i] );
    if (vet[maior] < vet[i])
      maior = i;
    if(vet[menor] > vet[i])
      menor = i;
  }
  printf("Menor : %d - > %d \nMaior : %d - > %d",vet[menor],menor,vet[maior],maior );



  return 0;
}
