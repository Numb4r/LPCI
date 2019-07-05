#include <stdlib.h>
#include <stdio.h>


void compara2(int *a,int* b){
  int aux = *a > *b ? *a : *b;
  *a = *a < *b ? *a : *b;
  *b = aux;
}

int compara(int* a,int* b,int* c ){
  if(*a == *b && *b == *c)
    return 1;
  compara2(a,b);
  compara2(a,c);
  compara2(b,c);
  return 0;
}

int main(int argc, char const *argv[]) {
  int a = 0,b = 0,c = 0;
  scanf("%d %d %d",&a,&b,&c );
  compara(&a,&b,&c);
  printf("%d %d %d\n",a,b,c );
  return 0;
}
