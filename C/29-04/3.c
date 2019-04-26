#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]) {
    int a,b,dif;
    scanf("%d %d",&a,&b );
    dif = a > b ? a-b : b-a;
    printf("%d \n",dif );
  return 0;
}
