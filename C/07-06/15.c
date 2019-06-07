#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  float matriz[3][3];
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10;
    }
  }
  float aux = 0;
  scanf("%f",&aux );
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      printf("%0.2f ",matriz[i][j]*aux );
    }
    printf("\n" );
  }

  return 0;
}
