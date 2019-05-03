#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float salariominimo,totalvalorvendas;
  int qntvendas;
  scanf("%f %f %d",&salariominimo,&totalvalorvendas,&qntvendas );
  if ((qntvendas > 0 && totalvalorvendas == 0) || (qntvendas == 0 && totalvalorvendas > 0)) {
    printf("Q?\n");
    exit(-2);
    /* code */
  }
  printf("%0.2f\n",2*salariominimo+(qntvendas*50)+totalvalorvendas*0.05 );
  return 0;
}
