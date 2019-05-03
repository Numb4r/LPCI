#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  for (size_t i = 1; i < 21; i++) {
    if (i % 2 !=0) {
      printf("%zd\n",i );
    }
  }
  return 0;
}
