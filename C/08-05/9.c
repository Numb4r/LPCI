#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  for (size_t i = 15; i < 201; i++) {
    printf("%0.2f\n",pow(i,2) );
  }
  return 0;
}
