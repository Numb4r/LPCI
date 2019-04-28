#include <stdio.h>
#include <stdlib.h>
#define Maioridade_civil 16
#define Marioridade_penal 18
void converter_data_separada(int data,int* dia,int* mes,int* ano){
   *dia = data*0.000001;
   *mes = data*0.0001 - *dia *100 ;
   *ano = data - *mes *10000 - *dia *1000000;
}
int main(int argc, char const *argv[]) {
  float data_nascimento,data_hoje;
  int dif_maioridade_a;
  scanf("%f %f",&data_nascimento,&data_hoje );
  int dia_n,mes_n,ano_n,dia_h,mes_h,ano_h;
  //Separacao das datas
  converter_data_separada(data_nascimento,&dia_n,&mes_n,&ano_n);
  converter_data_separada(data_hoje,&dia_h,&mes_h,&ano_h);
  
  dif_maioridade_a = ano_h - ano_n;


  if (dif_maioridade_a >= Maioridade_civil  ) {
    printf("Possui Maioridade civil\n" );

  }else{
    printf("Nao possui maioridade civil\n" );

  }
  if (dif_maioridade_a >= Marioridade_penal  ) {
    printf("Possui maioridade penal\n" );
  }else{
    printf("Nao possui maioridade penal\n" );
  }




  return 0;
}
