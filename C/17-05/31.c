#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int cod,a,b,c,media;
  scanf("%d %d %d",&a,&b,&c );
  if (a>b) {
    if (a>c) {
      media = a*4+b*3+c*3;
    }else{
      media = a*3+b*3+c*4;
    }
  }else if (b>c) {
    media = a*3+b*4+c*3;
  }else{
    media = a*3+b*3+c*4;
  }
  printf("Cod ->%d\nNotas:\n1.%d\n2.%d\n3.%d\n",cod,a,b,c );
  if ((media/10)>=5)
    printf("Aprovado\n" );
  else
    printf("Reprovado\n" );
  return 0;
}
