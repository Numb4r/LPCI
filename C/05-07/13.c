#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float vet[10];
  for (size_t i = 0; i < 10; i++) {
    printf("%p\n",&vet[i] );
  }
  return 0;
}
