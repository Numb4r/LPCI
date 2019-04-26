#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int op;
  float n1,n2;
  scanf("%d %f %f",&op,&n1,&n2 );
  switch (op) {
    case 1:
      printf("%0.2f\n",(n1+n2)/2);
      break;
    case 2:
      printf("%0.2f\n",n1 > n2 ? n1-n2: n2-n1 );
      break;
    case 3:
      printf("%0.2f\n",n1*n2 );
      break;
    case 4:
      printf("%0.2f\n",n1/n2 );
      break;
    default:
    printf("Opcao invalida\n" );
  }
  return 0;
}
