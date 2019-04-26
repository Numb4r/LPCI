#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 0,op;
  scanf("%d",&a );
  if (((a+1)/(-2*a+3)) <=0) 
    printf("Satisfaz\n" );
  else
    printf("Nao satisfaz\n" );

  return 0;
}
