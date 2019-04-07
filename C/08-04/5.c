#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float a,b,c,d,e;
  scanf("%f %f %f %f %f",&a,&b,&c,&d,&e );
  printf("c%f\n",a+b+c+d+e );
  printf("b%f\n",a*b*c*d*e );
  printf("a%f\n",(a+b+c+d+e)/5 );

  return 0;
}
