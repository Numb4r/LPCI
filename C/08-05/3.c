#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int maior = 0,posicao = 0,numero = 0,posicaomaior = 0;
  while (numero >= 0) {
    scanf("%d",&numero );
    posicaomaior = maior < numero ? posicao : posicaomaior;
    maior = maior < numero ? numero : maior;
    posicao++;
  }
  printf("Numero -> %d\nPosicao -> %d\n",maior,posicaomaior );


  return 0;
}
