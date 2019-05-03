#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = 0;
  scanf("%d",&n );
  if (n < 1 || n > 10) {
    printf("Tabuada invalida\n" );
    exit(-1);
  }
  for (size_t i = 1; i < 11; i++) {
    printf("%zu x %d  = %lu \n",i,n,i*n );
  }
  return 0;
}
