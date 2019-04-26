#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = 0;
  scanf("%d",&a );
  if ( ((2*a+1)*(-3*a-7))  > 0)
    printf("Satisfaz\n" );
  else
    printf("Nao satisfaz\n");
  return 0;
}
