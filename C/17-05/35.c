#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float a,b,c;
  int op;
  scanf("%d %f %f %f",&op,&a,&b,&c );
  switch (op) {
    case 1:
      printf("%0.2f\n",(a+b+c)/3 );
      break;
    case 2:
      printf("%0.2f\n",(a+b+c)/(3+3+4) );
      break;
    case 3:
      printf("%0.2f\n",(a+b+c)*(3+3+4) );
      break;
    default:
      printf("Opcao invalida\n" );

  }
  return 0;
}
