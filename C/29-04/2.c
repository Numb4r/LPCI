#include <stdio.h>
#include <stdlib.h>

int maior_c(int a,int b){
  return a > b ? a : b;
}
int main(int argc, char const *argv[]) {
  int a,b,c,maior;
  scanf("%d %d %d",&a,&b,&c);
  maior = maior_c(a,b);
  maior = maior_c(maior,c);
  printf("%d\n",maior );
  return 0;
}
