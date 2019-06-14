#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  FILE *pf;
  pf = fopen("arq1.txt","r");
  int aux = 0;
  char nome[100],segundo[100];
  float notas[2] ;
  if(pf != NULL){
    fscanf(pf,"%d",&aux);
    printf("%d alunos\n",aux );

    for (size_t i = 0; i < aux; i++) {
      fscanf(pf,"%s",nome);
      fscanf(pf,"%s",segundo);

      fscanf(pf,"%f",&notas[0]);
      fscanf(pf,"%f",&notas[1]);
      if((notas[0]+notas[1])/2 < 7.0)
        printf("%s %s\n",nome,segundo );
    }
  }//pf != NULL
  fclose(pf);
  return 0;
}
