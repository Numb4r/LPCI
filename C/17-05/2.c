#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float saldo = 0;
  scanf("%f",&saldo );
  if (saldo < 600) {
    if (saldo < 401) {
      if (saldo < 201) {
        printf("0\n");
      } else {
        printf(" 20 -> %f\n",saldo*0.2 );
      }
    } else {
      printf(" 30 - >%f\n",saldo*0.3 );
    }
  } else {
    printf(" 40 - > %f\n", saldo*0.4 );
  }
  return 0;
}
