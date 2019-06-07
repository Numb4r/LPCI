#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int matriz[20][10],vetor_soma[10];
    srand(time(NULL));
    for (size_t i = 0; i < 20; i++) {
      for (size_t j = 0; j < 10; j++) {
        matriz[i][j] = rand() % 10;
        printf("%d ", matriz[i][j]);
      }
      printf("\n" );
    }
    for (size_t i = 0; i < 10; i++) {
      vetor_soma[i] = 0;
      for (size_t j = 0; j < 20; j++) {
        vetor_soma[i] += matriz[i][j];
      }
    }
    for (size_t i = 0; i < 10; i++) {
      printf("- > %d\n",vetor_soma[i]);
      for (size_t j = 0; j < 20; j++) {
        for (size_t k = 0; k < 10; k++) {
          printf("%d ",matriz[j][k]*vetor_soma[i] );
        }
        printf("\n" );
      }
    }

  return 0;
}
