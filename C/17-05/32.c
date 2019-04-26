#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 0;
  scanf("%d",&a );
  if (a%2 ==0)
    printf("Par\n" );
  else
    printf("Impar\n" );
  if (a>=0)
    printf("Positivo\n" );
  else
    printf("Negativo\n" );
  return 0;
}
