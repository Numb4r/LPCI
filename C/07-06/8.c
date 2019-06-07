#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  int matriz [2][4], qnt = 0,media = 0;
  srand(time(NULL));
  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 50;
    }
  }

  for (size_t i = 0; i < 2; i++) {
    qnt = 0;
    for (size_t j = 0; j < 4; j++) {
      printf("%d ",matriz[i][j] );
      if(matriz[i][j]  > 12 && matriz[i][j] < 20)
        qnt++;
      media+=matriz[i][j];
    }
    printf(" - > %d\n",qnt );
  }
  printf("%d\n",media/(2*4) );

  return 0;
}
