#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    float a,b,c;
    scanf("%f %f %f\n",&a,&b,&c );
    float media = (a+b+c)/3;
    media = pow(a,5);
    printf("%f",sqrt( pow(a-media,2) + pow(b-media,2) + pow(c-media,2)) );
  return 0;
}
