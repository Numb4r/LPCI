#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float aux = 0;
  int j = 1;
  for (size_t i = 1; i < 51; i++) {
    aux+=(j/i);
    printf("\n+ %d / %d",j,i );
    j+=2;

  }
  printf(" = %d\n",aux );

  return 0;
}
