#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int anos,qntdia;
  float preco;
  scanf("%d", &anos);
  scanf("%d",&qntdia );
  scanf("%f",&preco );
  printf("%f", 360*anos*qntdia/20*preco);

  return 0;
}
