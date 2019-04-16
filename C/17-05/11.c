#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c );
  if (a < b) {
    if (b < c) {
      printf("%d %d %d\n",a,b,c );
    }else{
      printf("%d %d %d\n",a,c,b );
    }
  }else{
    if (b < c) {
      printf("%d %d %d\n",b,c,a );
    }else{
      printf("%d %d %d\n",c,b,a );
    }
  }
  return 0;
}
