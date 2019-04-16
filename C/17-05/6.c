#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int aux = 0 , qnt = 0;
  scanf("%d %d",&aux , &qnt );
  switch (aux) {
    case 1001:
      printf("R$ : %0.2f\n",qnt*5.32 );
    break;
    case 1324 :
      printf("R$ : %0.2f\n",qnt*6.45 );
    break;
    case 6548 :
      printf("R$ : %0.2f\n",qnt*2.37 );
    break;
    case 987 :
      printf("R$ : %0.2f\n",qnt*5.32 );
    break;
    case 7623 :
      printf("R$ : %0.2f\n",qnt*6.45 );
    break;
      default:
    printf("Codigo Invalido\n" );
  }
  return 0;
}
