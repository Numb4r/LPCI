#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float mat[2][2],aux = 0;

  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 2; j++) {
      printf("%zu %zu ",i,j );
      scanf("%f",&mat[i][j] );
    }

  }
  scanf("%f",&aux );
  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 2; j++) {
      printf("%f ", mat[i][j]/aux);
    }
    printf("\n" );
  }
  return 0;
}
