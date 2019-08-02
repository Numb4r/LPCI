#include <stdlib.h>
#include <stdio.h>


int fib(int aux){
  int p1 = 1,p2 = 1,aux1 = 0;
  if (aux == 1 || aux == 2) {
    return 1;
  }
  for (size_t i = 0; i < aux-2; i++) {

    aux1 = p2;
    p2+=p1;
    p1 = aux1;
  }
  return p2;
}

int main(int argc, char const *argv[]) {
  int aux  = 0;
  scanf("%d",&aux );
  printf("%d",fib(aux) );
  return 0;
}
