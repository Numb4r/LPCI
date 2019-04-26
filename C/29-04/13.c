#include <stdio.h>
#include <stdlib.h>
void multiplo_de_dois(int a) {
  if (a%2==0)
    printf("E multiplo de dois\n" );
  else
    printf("Nao e multiplo de dois\n" );
}

int main(int argc, char const *argv[]) {
  int a , b;
  scanf("%d %d",&a,&b );
  multiplo_de_dois(a);
  multiplo_de_dois(b);
  return 0;
}
