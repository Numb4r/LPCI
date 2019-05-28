#include <stdio.h>
#include <stdlib.h>
#define COUNT 5
int main(int argc, char const *argv[]) {
  char nomeproduto[5][30];
  float valores[5];
  for (size_t i = 0; i < COUNT; i++) {
    printf("\nIndique o nome do produto >" );
    scanf("%s",nomeproduto[i] );
    printf("\nIndique o valor do produto >" );
    scanf("%f",&valores[i] );
  }
  int qntcinquenta = 0;
  float media = 0,qntmedia = 0;
  for (size_t i = 0; i < COUNT; i++) {
    if (valores[i] < 50) {
      qntcinquenta++;
    }else if(valores[i] < 100){
      printf("%s\n",nomeproduto[i] );
    }else{
      media+=valores[i];
      qntmedia++;
    }
  }
  printf("A quantidade de produtos com valor inferior a de 50 e %d\n",qntcinquenta );
  if(qntmedia != 0)
    printf("A media e %0.2f\n",media/qntmedia );

  return 0;
}
