#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[]) {
  int matriz[12][4];
  char nomes[12][30] = {"Janeiro", "Fevereiro","Marco","Abril","Maio","Junho","Julho","Setembro","Outubro","Novembro","Dezembro"};
  srand(time(NULL));
  for (size_t i = 0; i < 12; i++) {
    for (size_t j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 1000;
    }
  }

  return 0;
}
