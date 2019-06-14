#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *fp = fopen("arq.txt","w");
  char aux[100],c ;
  int i = 0,controle = 0;
  while (controle == 0) {
    fgets(aux,sizeof(aux),stdin);
    i = 0;
    while ((c = aux[i]) != '\0') {
      if(c != '0' && controle != 1){
        fprintf(fp, "%c",c);

      }else{
        controle = 1;
      }
      i++;
    }
  }

  fclose(fp);
  fp = fopen("arq.txt","r");

  while ((c = fgetc(fp)) != EOF) {
    printf("%c",c );
    /* code */
  }
  return 0;
}
