#include <stdio.h>
#include <stdlib.h>



int e_triangulo(int a,int b,int c){
  if (a > b+c || b > a+c || c > a+c) {
    return 1;
  }
  return 0;
}
int tipo_de_triangulo(int a,int b,int c){
  if (a == b && c == b) {
    return 1;
  }
  if (a == b || a == c || b == c) {
    return 2;
  }
  if (a != b && b != c) {
    return 3;
  }
  return 0;
}
int main(int argc, char const *argv[]) {
  int a = 0,b = 0,c = 0;
  scanf("%d %d %d",&a,&b,&c );
  if (e_triangulo(a,b,c) == 1) {
    printf("Nao e um triangulo\n" );
    exit(-1);
  }
  switch (tipo_de_triangulo(a,b,c)) {
    case 1:
      printf("Equilatero\n" );
    break;
    case 2:
      printf("Isosceles\n" );
    break;
    case 3:
      printf("Escaleno\n" );
    break;
    default:
      printf("Nao foi possivel a identificacao\n" );
  }
  return 0;
}
