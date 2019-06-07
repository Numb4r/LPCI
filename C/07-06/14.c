#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[]) {
  int matriz1[3][8],matriz2[3][8];
  srand(time(NULL));
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 8; j++) {
      matriz1[i][j] = rand() % 10;
    }
  }
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 8; j++) {
      matriz2[i][j] = rand() % 10;
    }
  }
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 8; j++) {
      printf("%d ",matriz1[i][j]+matriz2[i][j] );
    }
    printf("\n" );
  }
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 8; j++) {
      printf("%d ",matriz1[i][j]-matriz2[i][j] );
    }
    printf("\n" );
  }
  return 0;
}
