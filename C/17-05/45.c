#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]) {
  char nome[30];
  float vcompra;
  float qntporca,qntparafusos,qntarruelas,desconto = 1;

  scanf("%s",nome );
  scanf("%f",&vcompra );
  scanf("%f %f %f",&qntporca,&qntparafusos,&qntarruelas );
  qntporca *= pow(0.1,qntporca);
  qntparafusos *= pow(0.2,qntparafusos);
  qntarruelas *= pow(0.3,qntarruelas);
  if(qntporca > 0)
    desconto*=qntporca;
  if(qntparafusos > 0)
    desconto*=qntparafusos;
  if(qntarruelas > 0)
    desconto*=qntarruelas;
  printf("%s %0.2f %0.2f\n",nome,vcompra,vcompra - vcompra*desconto );
  return 0;
}
