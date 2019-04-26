#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
  if (a>b) {
    if (a>c) {
      printf("A e o maior\n" );
    }else{
      printf("C e o maior\n" );
    }
  }else if (b>c) {
    printf("B e o maior\n" );
  }else{
    printf("C e maior\n" );
  }
  return 0;
}
