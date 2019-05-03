#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int op;
  float saldo,movimentacao;
  scanf("%f %f",&saldo,&movimentacao );
  printf("1.Deposito\n2.Retirada\n");
  scanf("%d",&op );
  switch (op) {
    case 1:
      printf("%0.2f\n", saldo+=movimentacao);
      break;
    case 2:
      saldo-=movimentacao;
      printf("%0.2f\n", saldo);
      if (saldo  < 0 )
        printf("Conta estourada\n" );
      break;
    default:
      printf("Opcao invalida\n");
  }
  return 0;
}
