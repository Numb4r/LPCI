#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
  if ((a+b+c)/3 > 6) {
    printf("Aprovado\n" );
  }else{
    printf("Reprovado\n" );
  }
  return 0;
}
