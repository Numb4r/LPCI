#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  for (size_t i = 0; i < 200; i++) {
    if (i % 4 ==0) {
      printf("%zd\n",i );
    }
  }
  return 0;
}
