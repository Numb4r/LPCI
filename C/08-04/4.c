#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b,aux;
  scanf("%d %d",&a,&b );
  aux = a;
  a = b;
  b = aux;
  printf("%d %d\n",a,b );
  return 0;
}
