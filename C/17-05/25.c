#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vet[6],x,y;
  for (size_t i = 0; i < 6; i++) {
    scanf("%d",&vet[i]);
  }
  //x = ce - bf / ae - bd;
  //y = af - cd / ae - bd;
  x = (vet[2]*vet[4] - vet[1]*vet[5]) / (vet[0]*vet[4] - vet[1]*vet[3]);
  y = (vet[0]*vet[5] - vet[2]*vet[3])/ (vet[0]*vet[4] - vet[1]*vet[3]);
  /*
  a = 0
  b = 1
  c = 2
  d = 3
  e = 4
  f = 5
  */

  return 0;
}
