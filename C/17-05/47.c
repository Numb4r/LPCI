#include <stdio.h>
#include <stdlib.h>
typedef struct produto{
  char nome[30];
  float preco;
  int desconto;
}produto;

int main(int argc, char const *argv[]) {
  produto prod[4];
  for (size_t i = 0; i < 4; i++) {
    scanf("%s %f %d",prod[i].nome,&prod[i].preco,&prod[i].desconto );
  }
  int qnt[4];
  for (size_t i = 0; i < 4; i++) {
    scanf("%d",&qnt[i] );
  }
  for (size_t i = 0; i < 4; i++) {
    printf("%s %f %d %f\n",prod[i].nome,prod[i].preco,prod[i].desconto,prod[i].preco*qnt[i] -(prod[i].preco*prod[i].desconto/100*qnt[i])  );
  }

  return 0;
}
