#include <stdio.h>
#include <stdlib.h>
#define TIPO1 0.5
#define TIPO2 0.6
#define TIPO3 0.75
int main(int argc, char const *argv[]) {
  float t1,t2,t3;
  scanf("%f %f %f\n",&t1,&t2,&t3 );
  printf("1. ->%f  - >%f\n",t1,t1*TIPO1 );
  printf("2. ->%f  - >%f\n",t2,t2*TIPO2 );
  printf("3. ->%f  - >%f\n",t3,t3*TIPO3 );
  return 0;
}
