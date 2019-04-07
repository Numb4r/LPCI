#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int lado1,lado2;
  scanf("%d",&lado1 );
  scanf("%d",&lado2 );

  printf("Perimetro: %d\n",2*lado1+2*lado2 );
  printf("Area: %d\n",lado1*lado2 );
  return 0;
}
