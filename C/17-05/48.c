#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

  char categoria,nome[30];
  float salario;
  scanf("%s\n",nome );
  scanf("%c",&categoria );
  scanf("%f",&salario );
  categoria = toupper(categoria);
  printf("%s %c ",nome,categoria );
  if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
    printf("%f\n",salario+salario*0.1 );
  }
  if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T' ) {
    printf("%f\n",salario+salario*0.15 );
  }
  if (categoria == 'K' || categoria == 'R'  ) {
    printf("%f\n",salario+salario*0.25 );
  }
  if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S'  ) {//LMNOPQS
    printf("%f\n",salario+salario*0.35 );
  }
  if (categoria == 'U' || categoria == 'V'  || categoria == 'W'  || categoria == 'X'  || categoria == 'Y'  || categoria == 'Z' ) {
    printf("%f\n",salario+salario*0.50 );
  }
  return 0;
}
