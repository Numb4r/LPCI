#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(int argc, char const *argv[]) {
  int matriz [4][6],matriz2[6][4];
  srand(time(NULL));
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 6; j++) {
      matriz[i][j] = rand() % 100;
    }
  }
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 6; j++) {
      matriz2[i][j] = rand() % 100;
    }
  }
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 6; j++) {
      printf("%d ",matriz[i][j]+matriz2[j][i] );
    }
    printf("\n" );
  }
  return 0;
}
