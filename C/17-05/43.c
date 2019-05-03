#include <stdio.h>
#include <stdlib.h>

float fatorial(int a){
  for (size_t i = a-1; i > 0; i--) {
    a*=i;
  }
  return a;
}
int main(int argc, char const *argv[]) {
  float E = 2;
  for (size_t i = 2; i < 5; i++) {
    E+=(1/fatorial(i));
  }
  printf("%f\n",E );
  return 0;
}
