#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  int matriz[6][3],maiorL[2] ={0,0},menorL[2] = {0,0};
  srand(time(NULL));
  for (size_t i = 0; i < 6; i++) {
    for (size_t j = 0; j < 3; j++) {

      matriz[i][j] = rand() % 100;
      printf("%d ",matriz[i][j] );
      if (matriz[i][j] > matriz[maiorL[0]][maiorL[1]]) {
        maiorL[0] = i;
        maiorL[1] = j;
      }
      if (matriz[i][j] < matriz[menorL[0]][menorL[1]]) {
        menorL[0] = i;
        menorL[1] = j;
      }
    }
    printf("\n" );
  }
  printf("Maior - > %d\n",matriz[maiorL[0]][maiorL[1]] );
  printf("Menor - > %d\n",matriz[menorL[0]][menorL[1]] );
  return 0;
}
