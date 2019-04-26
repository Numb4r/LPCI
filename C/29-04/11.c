#include <stdio.h>
#include <stdlib.h>
#define Maioridade_civil 5760
#define Marioridade_penal 6480
void converter_data_separada(int data,int* dia,int* mes,int* ano){
   *dia = data*0.000001;
   *mes = data*0.0001 - *dia *100 ;
   *ano = data - *mes *10000 - *dia *1000000;
}
int main(int argc, char const *argv[]) {
  float data_nascimento,data_hoje,dif_maioridade;
  scanf("%f %f",&data_nascimento,&data_hoje );
  int dia_n,mes_n,ano_n,dia_h,mes_h,ano_h;
  converter_data_separada(data_nascimento,&dia_n,&mes_n,&ano_n);
  converter_data_separada(data_hoje,&dia_h,&mes_h,&ano_h);
  dif_maioridade = (ano_n-1 )*12*(mes_n-1)*30+dia_n;//TODO:CORRIGIR ESSA CONTA
  printf("%f\n",dif_maioridade );
  if (dif_maioridade >= Maioridade_civil) {
    printf("Possui Maioridade civil\n" );
    /* code */
  }else{
    printf("Nao possui maioridade civil\n" );

  }
  if (dif_maioridade >= Marioridade_penal) {
    printf("Possui maioridade penal\n" );
  }else{
    printf("Nao possui maioridade penal\n" );
  }


  printf("%d -  %d -  %d\n",dia_n,mes_n,ano_n);
  //int diferenca_ano == data_hoje
  return 0;
}
