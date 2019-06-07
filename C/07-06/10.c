#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  int notas[15][5];
  char nomes[15][5];
  float media = 0,media_aluno = 0;
  srand(time(NULL));
  for (size_t i = 0; i < 15; i++) {
    scanf("%s",nomes[i] );
    for (size_t j = 0; j < 5; j++) {

      notas[i][j] = rand() % 10;
      media +=  notas[i][j];
    }
  }
  for (size_t i = 0; i < 15; i++) {
    media_aluno = 0;
    for (size_t j = 0; j < 5; j++) {
      media_aluno+=notas[i][j];

    }
    printf("%s - > %0.2f\n",nomes[i] ,media_aluno/5 );
  }
  printf("Media da sala -> %0.2f \n",media/15/5 );

  return 0;
}
