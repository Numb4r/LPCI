#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float mat[3][3];
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      /* code */
      printf("%p ",&mat[i][j] );
    }
    printf("\n" );
  }
  return 0;
}
