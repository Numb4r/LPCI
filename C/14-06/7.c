#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char frases[5][50],nomeArquivo[30],c;
  fgets(nomeArquivo,sizeof(nomeArquivo),stdin);
  int j = 0;
  for (size_t i = 0; i < 5; i++) {
    scanf("%s",frases[i] );
  }
  FILE *fp = fopen(nomeArquivo,"w");
  for (size_t i = 0; i < 5; i++) {
    j = 0;
    fprintf(fp, "%lu",strlen(frases[i]) );
    fprintf(fp, "%s"," " );
    while (j < strlen(frases[i])) {
      c = frases[i][j];
      c = toupper(c);
      fprintf(fp, "%c",c );
      j++;
    }
    fprintf(fp, "%c",'\n' );
  }
  fclose(fp);
  int aux = 0;
  fp = fopen(nomeArquivo,"r");
  for (size_t i = 0; i < 5; i++) {
    aux = 0;
    fscanf(fp,"%d",&aux);
    //c=fgetc(fp);
    while (aux>-1) {
      printf("%c",c=fgetc(fp) );
      aux--;
    }
    printf("\n");
  }
  fclose(fp);

  return 0;
}
