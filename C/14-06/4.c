#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *fp;
  char c;
  fp = fopen ("arq.txt","r");
  if (fp!=NULL)
  {
    while ((c = fgetc(fp)) != EOF) {
      printf("%c",c );
    }
    fclose (fp);
  }
  return 0;
}
