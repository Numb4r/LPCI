#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int soma = 0;
  for (size_t i = 0; i < 10000; i++) {
    printf("%zu\n",i );
    soma+=i;
  }
  printf("%d\n",soma );
  return 0;
}
