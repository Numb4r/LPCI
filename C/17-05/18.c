#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int x1,y1,x2,y2;
  printf("Entre com o primeiro ponto\n" );
  scanf("%d %d",&x1,&y1 );
  printf("Entre com o segundo ponto\n" );
  scanf("%d %d",&x2,&y2 );
  printf("%0.2f\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
  return 0;
}
