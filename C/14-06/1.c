#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  FILE *pf;
  char aux = '\0',arquivo[30];
  scanf("%s",arquivo );

  int qnt = 0;
  pf = fopen(arquivo,"r");

  if(pf!=NULL){
    while((aux = fgetc(pf)) != EOF)
      qnt++;
    printf("%d",qnt-1 );
  }else{
    printf("Erro ao abrir arquivo\n");
  }

  fclose(pf);
  return 0;
}
