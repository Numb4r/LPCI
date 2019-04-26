#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]) {
  float a ,b ,c;
  scanf("%f %f %f",&a,&b,&c );
  printf("%0.0f\n",a > 0 ? sqrt(a) : pow(a,2));
  if ( b > 10 && b < 100)
    printf("Numero entre 10 e 100.Intervalo permitido\n");
  printf("%0.0f\n",c < b ? b - c : b + c );
  return 0;
}
