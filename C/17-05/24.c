#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  float custo_de_fabrica;
  scanf("%f",&custo_de_fabrica );
  printf("%0.3f\n",custo_de_fabrica+custo_de_fabrica*0.28+custo_de_fabrica*0.45 );
  return 0;
}
