#include <stdio.h>
#include <stdlib.h>
//#include "Estilizacao.h"
#define MAX_FUNCIONARIO 10
void funcionario(){
  //espacamento();
  int cod = 0,HTrab = 0,Depen = 0;
  char op ;
  printf("Informe o codigo :");
  scanf("%d",&cod );
  printf("Informe as horas trabalhadas : \n" );
  scanf("%d",&HTrab);
  printf("Informe os dependentes : \n" );
  scanf("%d",&Depen );
  float salario = 12 * HTrab + 40 * Depen;
  //espacamento();
  printf("Codigo: %d\nSalario Bruto: %f\nINSS : %f\nIR : %f\nSalario Liquido: %f\n",cod,salario,salario*0.085,salario*0.05,salario - (salario *0.085+salario*0.05) );
  //pequeno_espacamento();
}
int main(int argc, char const *argv[]) {
  int op = 0 , aux = 0;
  //espacamento();
  do {
    printf("1.Cadastrar funcionario\n" );
    printf("9.Exit\n" );
    scanf("%d", &op);
    if (op == 1){
      funcionario();
      aux++;
    }
  } while(op != 9 && aux != MAX_FUNCIONARIO );
  return 0;
}
