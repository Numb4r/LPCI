#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3
int main(int argc, char const *argv[]) {
  char nome[30],sobrenome[30],c;
  int i = 0;
  FILE *fp = fopen("arq.txt","w");
  if(fp == NULL)
    exit(-1);
  for (size_t i = 0; i < TAM; i++) {
    printf("Escreva o nome:" );
    fgets(nome,sizeof(nome),stdin);
    printf("Escreva o sobrenome: " );
    fgets(sobrenome,sizeof(nome),stdin);
    printf("\n");
    strcat(nome,sobrenome);
    printf("%s\n",nome );

    while ((c = nome[i])!= '\0') {
      if(c != '\n')
        fprintf(fp, "%c",c );
      else
        fprintf(fp, "%s"," ");
      i++;
    }
    i = 0;
    fprintf(fp,"%c",'\n');
  }
  fclose(fp);

  return 0;
}
