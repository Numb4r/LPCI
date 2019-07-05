#include <stdlib.h>
#include <stdio.h>

void soma(int* a,int* b){
  *a = *a + *b;
}
int main(int argc, char const *argv[]) {
  int a = 0,b = 0;
  scanf("%d",&a );
  scanf("%d",&b );
  soma(&a,&b);
  printf("a :%d  b : %d\n",a,b );
  return 0;
}
