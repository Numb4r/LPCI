#include <stdio.h>
#include <stdlib.h>


void frac(float num,int* inte,float* frac){
  *inte = num;
  *frac = num - *inte ;

}

int main(int argc, char const *argv[]) {

  float numero = 0,fracao = 0;
  int inteiro = 0;
  scanf("%f",&numero );
  frac(numero,&inteiro,&fracao);
  printf("%d %f \n",inteiro,fracao );
  return 0;
}
