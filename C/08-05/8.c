#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int p1 = 1,p2 = 1,seq;
  printf("%d %d",p1,p2 );
  for (size_t i = 3; i < 16; i++) {
    seq=p1+p2;
    p1=p2;
    p2=seq;
    printf(" %d",seq );
  }
  return 0;
}
