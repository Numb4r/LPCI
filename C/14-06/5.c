#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]) {
  int a[20],b[20];
  FILE *fp;
  fp = fopen ("arq.txt","w");
  if (fp!=NULL)
  {
  for (size_t i = 0; i < 20; i++) {
    scanf("%d",&a[i] );
    fprintf(fp,"%d", a[i]);
    fprintf(fp,"%c",'\n');
  }
    fclose (fp);
  }

  fp = fopen ("arq.txt","r");
  if (fp!=NULL)
  {
    for (size_t i = 0; i < 20; i++) {
      /* code */
      fscanf(fp,"%d", &b[i]);
    }
    fclose (fp);
  }
  printf("Print de b\n" );
  for (size_t i = 0; i < 20; i++) {
    printf("%d\n",b[i] );
  }
  return 0;
}
