#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int op;
  float salario;
  scanf("%d %f",&op,&salario );
  switch (op) {
    case 101:
      printf("%f -> %f %f\n",salario,salario+salario*0.1,salario*0.1 );
      break;
    case 102:
      printf("%f -> %f %f\n",salario,salario+salario*0.2,salario*0.2 );
      break;
    case 103:
      printf("%f -> %f %f\n",salario,salario+salario*0.3,salario*0.3 );
      break;
    default:
      printf("%f -> %f %f\n",salario,salario+salario*0.4,salario*0.4 );
  }
  return 0;
}
