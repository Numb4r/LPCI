#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[]) {
  int matriz[12][4],soma = 0,soma_ano = 0;
  char nomes[12][30] = {"Janeiro", "Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
  srand(time(NULL));
  for (size_t i = 0; i < 12; i++) {
    soma = 0;
    for (size_t j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 1000;
      soma+=matriz[i][j];
      soma_ano+=soma;
    }
    printf("%s  -  >%d\n",nomes[i],soma );
  }
  for (size_t i = 0; i < 4; i++) {
    soma = 0;
    for (size_t j = 0; j < 12; j++) {
      soma = matriz[i][j];
    }
    printf("%zu - > %d\n",i+1,soma );
  }
  printf("Vendido ao ano %d\n",soma_ano );

  return 0;
}
