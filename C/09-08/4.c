#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
  char sexo;
  char cor_olhos;
  char cor_cabelo;
  int idade;
}Pessoa;

void Leitura(Pessoa pessoa[],int nPessoa) {
  for (size_t i = 0; i < nPessoa; i++) {
    printf("\nSexo>");
    scanf("%s",&pessoa[i].sexo);
    printf("\ncor dos olhos>");
    scanf("%s",&pessoa[i].cor_olhos );
    printf("\ncor de cabelo>");
    scanf("%s",&pessoa[i].cor_cabelo );
    printf("\nidade>");
    scanf("%d",&pessoa[i].idade);
    printf("\n=============================================\n");
  }
}

float media_olhos_cabelo(Pessoa pessoa[],int nPessoa){
  float qntCabelo = 0,somaIdade = 0;
  for (size_t i = 0; i < nPessoa; i++) {
    if (pessoa[i].cor_olhos == 'C' && pessoa[i].cor_cabelo == 'P') {
      qntCabelo++;
      somaIdade+=pessoa[i].idade;
    }
  }
  return somaIdade/qntCabelo;
}
int maior_idade(Pessoa pessoa[],int nPessoa){
  int aux = 0;
  for (size_t i = 0; i < nPessoa; i++) {
    aux < pessoa[i].idade ? aux = pessoa[i].idade : aux;
  }
  return aux;
}
int FOL(Pessoa pessoa[],int nPessoa){
  int aux = 0;
  for (size_t i = 0; i < nPessoa; i++) {
    if(pessoa[i].sexo == 'F' && pessoa[i].idade > 18 && pessoa[i].idade <= 35 && pessoa[i].cor_olhos == 'A' && pessoa[i].cor_cabelo == 'L'){
      aux++;
    }
  }
  return aux;
}

int main(int argc, char const *argv[]) {
  int nPessoa = 0;
  printf("Entre com os numeros de pessoas\n" );
  scanf("%d",&nPessoa );
  Pessoa pessoa[nPessoa];
  Leitura(pessoa,nPessoa);
  float media = media_olhos_cabelo(pessoa,nPessoa);

  if (media > 0) {
    printf("Media de idade de cabelo Castanho e Preto e %0.2f\n",media );
  }
  printf("A maior idade e %d\n",maior_idade(pessoa,nPessoa) );
  printf("A quantidade de pessoas do sexo feminino,com olho azul,cabelo loiro e idade entre 18 e 35 anos e %d\n",FOL(pessoa,nPessoa) );
  /*for (size_t i = 0; i < nPessoa; i++) {
    printf("Sexo %c\n",pessoa[i].sexo );
    printf("cor dos olhos %c\n",pessoa[i].cor_olhos );
    printf("cor do cabelo %c\n",pessoa[i].cor_cabelo );
    printf("idade %d\n",pessoa[i].idade );
    printf("\n=============================================\n");
  }*/

  return 0;
}
