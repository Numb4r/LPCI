#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  float peso,altura;
  int x,y;
  scanf("%f %f",&peso,&altura );
  scanf("%d %d",&x,&y );
  printf("IMC: %f\nQuociente: %d\nResto: %d",peso/pow(altura,2),x/y,x%y );
  return 0;
}
