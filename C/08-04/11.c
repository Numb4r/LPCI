#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b;
  scanf("%d %d",&a,&b );
  printf("Dividendo: %d \nDivisor: %d\nQuociente: %d\nResto: %d",a,b,a/b,a%b );
  return 0;
}
