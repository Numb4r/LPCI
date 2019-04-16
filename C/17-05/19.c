#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
  float r = pow(a+b,2),s = pow(b+c,2);
  printf("%f\n",(r+s)/2 );
  return 0;
}
