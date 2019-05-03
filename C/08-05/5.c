#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int soma = 0;
  for (size_t i = 1; i < 101; i++) {
    printf("%zd + \n",i );
    soma+=i;
  }
  printf("%d\n",soma );
  return 0;
}
