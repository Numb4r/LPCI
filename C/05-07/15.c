#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vet[5];
  for (size_t i = 0; i < 5; i++) {
    scanf("%d",(vet+i) );
  }
  for (size_t i = 0; i < 5; i++) {
    printf("%d\n",2 * *(vet+i) );
  }
  return 0;
}
