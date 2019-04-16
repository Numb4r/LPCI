#include <stdio.h>
#include <stdlib.h>
void calculo(int Homem_velho,int Homem_novo,int Mulher_Velha,int Mulher_Nova){
  printf("%d\n",Homem_velho+Mulher_Nova );
  printf("%d\n",Homem_novo*Mulher_Velha );
}
int main(int argc, char const *argv[]) {
  int h1,h2,m1,m2;
  scanf("%d %d %d %d",&h1,&h2,&m1,&m2 );
  if (h1>h2) {
    if (m1>m2) {
      calculo(h1,h2,m1,m2);
    }else{
      calculo(h1,h2,m2,m1);
    }
  }else{
    if (m1>m2) {
      calculo(h2,h1,m1,m2);
    }else{
      calculo(h2,h1,m2,m1);
    }
  }
  return 0;
}
