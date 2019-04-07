#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
  printf("%f\n",(pow(a+b,2)+pow(b+c,2))/2 );
  return 0;
}
