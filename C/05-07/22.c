#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int array[10] = {1,2,3,4,5,6,7,8,9,10},*pi = NULL;
  pi  = array;
  for (size_t i = 0; i < 10; i++) {
    *(pi+i) +=1;
    printf("%d\n",*(pi+i) );
  }
  return 0;
}
