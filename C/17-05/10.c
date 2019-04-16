#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vMAX,vTraf;
  scanf("%d",&vMAX );
  scanf("%d",&vTraf );
  if (vTraf < vMAX+31) {
    if (vTraf < vMAX+11) {
      if(vTraf < vMAX+10){
        printf("Velocidade permitida\n");
      }else{
        printf("50 reais\n" );
      }
    }else{
      printf("100 reais\n");
    }
  }else{
    printf("200 reais\n" );
  }
  return 0;
}
