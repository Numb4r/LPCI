#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int op;
  float qnt;
  scanf("%d %f",&op,&qnt );

  switch (op) {
    case 100:
      printf("%0.2f\n",1.2*qnt );
      break;
    case 101:
      printf("%0.2f\n",1.3*qnt );
      break;
    case 102:
      printf("%0.2f\n",1.5*qnt );
      break;
    case 103:
      printf("%0.2f\n",1.2*qnt );
      break;
    case 104:
      printf("%0.2f\n",1.3*qnt );
      break;
    case 105:
      printf("%0.2f\n",qnt );
      break;
    default:
      printf("Opcao invalida\n" );

  }
  return 0;
}
