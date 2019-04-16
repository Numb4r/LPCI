#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int A = 0,B = 0,C = 0;
  scanf("%d",&A );
  scanf("%d",&B);
  scanf("%d",&C);
  if (A > B+C || B > A+C || C> A+B)  {
    printf("Nao e um triangulo\n" );
    exit(-1);
  }
  // Isosceles : Dois lados iguais
 //Escaleno : Todos os lados diferentes
 //equilatero : Todos os lados iguais


  if (A == B || A == C || B == C){
    if (B == C && A == B) {
      printf("Equilatero\n" );
    }else{
      printf("Isosceles\n" );
    }
  }else {

    printf("Escaleno\n" );
  }
  return 0;
}
