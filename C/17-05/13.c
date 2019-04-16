#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int aux,m1 = 0,m2 = 0;
  scanf("%d",&m1 );
  scanf("%d",&m2 );
  for (size_t i = 0; i < 3; i++) {
    scanf("%d",&aux );
    if (m1>m2) {
      if(aux>m2){
        m2 = aux;
      }
    }else{
      if(aux > m1){
        m1 = aux;
      }
    }
  }
  printf("%d %d %d  \n",m1,m2 ,m1+m2);
  return 0;
}
