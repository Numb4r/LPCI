#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b;
  scanf("%d %d",&a,&b );
  if (a == b)
    printf("Numeros iguais\n" );

  else
    printf("%d\n",a > b ? a : b );

  return 0;
}
