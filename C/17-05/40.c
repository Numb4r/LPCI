#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int ipi  = 0,id1,id2,qnt1,qnt2;
  float v1,v2;
  scanf("%d",&ipi );
  scanf("%d %d",&id1,&id2 );
  scanf("%d %d",&qnt1,&qnt2 );
  scanf("%f %f\n",&v1,&v2 );
  printf("%f\n",(v1*qnt1)+(v2*qnt2)*(ipi/100) );

  return 0;
}
