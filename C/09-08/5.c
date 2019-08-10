#include <stdlib.h>
#include <stdio.h>
float fat(int n){
  int aux = 1;
  for (size_t i = n; i > 0; i--) {
    aux*=i;
  }
    return aux;
}
float neperiano(float n){
  if (n == 0) {
    return 1;
  }
  return (1/fat(n))+ neperiano(n-1);
}

int main(int argc, char const *argv[]) {
  float n = 0;
  scanf("%f",&n );
  printf("%f",neperiano(n));
  return 0;
}
