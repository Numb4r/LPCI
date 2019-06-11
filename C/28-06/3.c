#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pause(){
  printf("\n\tPressione ENTER para continuar ");
    char c;
    while((c = getchar()) != '\n' && c != EOF){};
    while((c = getchar()) != '\n' && c != EOF){};
}


int verificar_codigo(int id,int contas[]){
  for (size_t i = 0; i < 10; i++) {
    if(id == contas[i])
      return 1;
  }
  return 0;
}
void insere_contas(int contas[],float saldo[]){
  int codigo = 0;
  for (size_t i = 0; i < 10; i++) {
    printf("Codigo - > %zu : ",i+1 );
    do{
      scanf("%d",&codigo);
      //codigo = rand() % 1000;
      if(verificar_codigo(codigo,contas)){
        printf("Codigo ja existente ou invalido,insira outro!\n");
        printf("Codigo - > %zu : ",i+1 );
      }
    }while(verificar_codigo(codigo,contas));
    contas[i] = codigo;
    printf("Saldo - > %zu : ",i+1 );
    scanf("%f",&saldo[i] );
    //saldo[i] = rand() % 100000;
    printf("------------------------------------------\n" );
  }
}

int consultar_saldo(int contas[],float saldos[]){
  int aux = 0;
  printf("\n\n" );
  printf("Digite o id da conta\n" );
  printf(">" );
  printf("%d\n",contas[0]);
  scanf("%d",&aux);

  for (size_t i = 0; i < 10; i++) {
    if(aux == contas[i]){
      printf("\n\n\t\tO saldo da conta  %d e %0.2f \n",contas[i],saldos[i]);
      pause();
      return 1;
    }
  }
  printf("\n\n\t\tId nao encontado\n" );
  pause();
  return 0;
}
int efetuar_deposito(int contas[],float saldos[]){
  int aux = 0,indiceConta = 0,bul = 0;
  float valor = 0;
  printf("\n\n" );
  printf("Entre com o id da conta que deseja depositar\n" );
  printf(">");
  printf("%d\n",contas[0]);
  scanf("%d",&aux );
  for (size_t i = 0; i < 10; i++) {
    if(aux == contas[i]){
      indiceConta = i;
      bul = 1;
    }
  }
  if(!bul){
    printf("\n\n\t\tId nao encontado\n" );
    pause();
    return 0;
  }
  printf("\nEntre com o valor a ser depositado\n" );
  printf(">");
  scanf("%f",&valor);
  saldos[indiceConta] += valor;
  printf("\n\n\tO saldo atual da conta %d e de %0.2f \n",contas[indiceConta],saldos[indiceConta] );
  pause();
  return 1;

}
int efetuar_saque(int contas[],float saldos[]){
  int aux = 0,indiceConta = 0,bul = 0;
  float valor = 0;
  printf("\n\n" );
  printf("Entre com o id da conta que deseja efetuar o saque\n" );
  printf(">");
  printf("%d\n",contas[0]);
  scanf("%d",&aux );
  for (size_t i = 0; i < 10; i++) {
    if(aux == contas[i]){
      indiceConta = i;
      bul = 1;
    }
  }
  if(!bul){
    printf("\n\n\t\tId nao encontado\n" );
    pause();
    return 0;
  }
  printf("\nEntre com o valor a ser retirado\n" );
  printf(">");
  scanf("%f",&valor);
  saldos[indiceConta] -= valor;
  printf("\n\n\tO saldo atual da conta %d e de %0.2f \n",contas[indiceConta],saldos[indiceConta] );
  pause();
  return 1;

}
int ativo_bancario(float saldos[]){
  float ativo = 0;
  printf("\n\n" );
  for (size_t i = 0; i < 10; i++) {
    ativo+=saldos[i];
  }
  printf("\t\tO ativo bancario atual e %0.2f\n",ativo );
  pause();
  return 1;
}
void menu_grafico(){
  for(int i = 0;i<1000;i++)
    printf("\n");
  printf("=====================================================\n");
  printf("\t\tB.A.N.C.O \n");
  printf("\t(Banco,bAnco,baNco,banCo,bancO)\n\n\n" );
  printf("\t1.Consultar saldo da conta\n");
  printf("\t2.Efetuar deposito\n");
  printf("\t3.Efetuar saque\n");
  printf("\t4.Consultar ativo bancario\n");
  printf("\t9.Sair\n");
  printf("\n=====================================================\n");
  printf(">");
}
/*void mostrar_contas(int contas[],float saldos[]){
  for (size_t i = 0; i < 10; i++) {
    printf("%d - > %0.2f\n",contas[i],saldos[i] );
  }
}*/
int main(int argc, char const *argv[]) {
  //srand(time(NULL));
  int idContas[10] = {0,0,0,0,0,0,0,0,0,0};
  float saldoContas[10] = {0,0,0,0,0,0,0,0,0,0};
  int aux = 0;
  printf("Insira os id's das contas e seus saldos \n" );
  insere_contas(idContas,saldoContas);
//  mostrar_contas(idContas,saldoContas);
  while (aux != 9 ) {
    menu_grafico();
    aux = 9;
    scanf("%d",&aux );
    switch (aux) {
      case 1: consultar_saldo(idContas,saldoContas);
      break;
      case 2: efetuar_deposito(idContas,saldoContas);
      break;
      case 3: efetuar_saque(idContas,saldoContas);
      break;
      case 4: ativo_bancario(saldoContas);
      break;
    }
  }

  return 0;
}
