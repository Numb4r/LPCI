#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
  int delta = pow(b,2)-(4*a*c);
  if (delta<0) {
    printf("Impossivel de calcular");
    exit(-1);
  }
  int raiz1,raiz2;
  raiz1 = (-b+sqrt(delta))/(2*a);
  raiz2 = (-b-sqrt(delta))/(2*a);
  printf("Raiz 1 : %d\nRaiz 2 : %d",raiz1,raiz2 );
  return 0;
}
