#include <stdio.h>
#include <stdlib.h>
float Aritimetica(float a1,float a2,float a3){
  return (a1+a2+a3)/3;
}
float Ponderada(float a1,float a2,float a3){
  return(3*a1+3*a2+2*a3)/(3+3+2);
}
float Harmonica(float a1,float a2,float a3){
  return 3/((1/a1)+(1/a2)+(1/a3));
}
int main(int argc, char const *argv[]) {
  float a1 = 0,a2 = 0,a3 = 0;
  scanf("%f %f %f",&a1,&a2,&a3 );
  printf("%f %f %f",Aritimetica(a1,a2,a3),Ponderada(a1,a2,a3),Harmonica(a1,a2,a3) );
  return 0;
}
