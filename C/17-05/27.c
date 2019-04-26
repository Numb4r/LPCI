#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main(int argc, char const *argv[]) {
  float a,b,c,maior;
  scanf("%f %f %f",&a,&b,&c );
  if (a>b) {
    if (a>c) {
      maior = a;
    }else{
      maior = c;
    }
  }else if(b>c){
    maior = b;
  }else{
    maior = c;
  }
  printf("A+B+|A-B| = %0.0f \n",a+b+sqrt(pow(a-b,2)));
  printf("O maior e %0.0f\n",maior );
  return 0;
}
