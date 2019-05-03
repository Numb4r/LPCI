#include <stdio.h>
#include <stdlib.h>
void ordem_c(float a,float b,float c);
void ordem_d(float a,float b,float c);
void maior_meio(float a,float b,float c);
int main(int argc, char const *argv[]) {
    int i = 0;
    float a,b,c;
    scanf("%d",&i );
    i = i < 0 ? i*(-1) : i ;
    scanf("%f %f %f\n",&a,&b,&c );
    switch (i) {
      case 1:
        ordem_c(a,b,c);
        break;
      case 2:
        ordem_d(a,b,c);
        break;
      case 3:
        maior_meio(a,b,c);
        break;
      default:
        printf("Opcao invalida\n");

    }


  return 0;
}
void ordem_c(float a,float b,float c){
  if (a < b && a < c) {
    if (b < c) {
      printf("%f %f %f\n",a,b,c );
    }else{
      printf("%f %f %f\n",a,c,b );
    }
  }
  if (b < c && b < a) {
    if (a < c) {
      printf("%f %f %f\n",b,a,c );
    }else{
      printf("%f %f %f\n",b,c,a );
    }
  }
  if (c < a && c < b) {
    if (a < b ){
      printf("%f %f %f\n",c,a,b );
    }else{
      printf("%f %f %f\n",c,b,a );
    }
  }
}
void ordem_d(float a,float b,float c){
  if (a > b && a > c) {
    if (b > c) {
      printf("%f %f %f\n",a,b,c );
    }else{
      printf("%f %f %f\n",a,c,b );
    }
  }
  if (b > c && b > a) {
    if (a > c) {
      printf("%f %f %f\n",b,a,c );
    }else{
      printf("%f %f %f\n",b,c,a );
    }
  }
  if (c > a && c > b) {
    if (a > b ){
      printf("%f %f %f\n",c,a,b );
    }else{
      printf("%f %f %f\n",c,b,a );
    }
  }
}
void maior_meio(float a,float b,float c){
  float maior = a > b ? a : b;
  maior = maior >  c  ?  maior : c;
  if(maior == a)
    printf("%f %f %f\n",b,a,c );
  if (maior == b)
    printf("%f %f %f\n",a,b,c );
  if (maior == c)
    printf("%f %f %f\n",a,c,b );

}
