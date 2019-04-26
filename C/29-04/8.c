#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n1,n2;
  scanf("%d %d",&n1,&n2 );
  if (n1>n2)
    printf("n1 > n2\n");
  if (n1 == n2)
    printf("n1 = n2\n");
  if (n1 < n2)
    printf("n1 < n2\n");
  return 0;
}
