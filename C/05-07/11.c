#include <stdlib.h>
#include <stdio.h>

int dobro(int* a,int* b){
  *a = 2 * *a;
  *b = 2 * *b;
  return *a+*b;
}

int main(int argc, char const *argv[]) {
  int a = 0,b = 0;
  scanf("%d",&a );
  scanf("%d",&b );

  printf("%d  a -> %d b -> %d\n",dobro(&a,&b),a,b );
  return 0;
}
