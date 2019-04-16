#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int id,notas[3],mediaEX;
  scanf("%d",&id );
  for (size_t i = 0; i < 3; i++) {
    scanf("%d",&notas[i]);
  }
  scanf("%d",&mediaEX );
  float aux = (notas[0]+notas[1]*2+notas[2]*3+mediaEX)/7;
  if (aux < 9) {
    if (aux < 7.5) {
      if (aux < 6) {
        if (aux < 4) {
          printf("E\n" );
        }else{
          printf("D\n" );
        }
      } else {
        printf("C\n" );
      }
    }else{
      printf("B\n" );
    }
  } else {
    printf("A\n" );
  }
  return 0;
}
