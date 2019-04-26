#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n1,n2;
  scanf("%d %d",&n1,&n2 );
  printf("%d\n",n1 > n2 ? n1 + n2 : n1 - n2 );
  return 0;
}
