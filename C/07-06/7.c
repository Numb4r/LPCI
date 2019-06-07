#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int matriz[3][5];
  srand(time(NULL));
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 5; j++) {
      matriz[i][j] = rand()%40;
      printf("%d ",matriz[i][j]);

    }
    printf("\n" );
  }
  int count = 0 ;
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 5; j++) {
      if(matriz[i][j] > 15 && matriz[i][j] < 20)
        count++;

    }
  }
  printf("Existem %d numeros\n",count );
  return 0;
}
