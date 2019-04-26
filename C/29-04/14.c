#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char op;
  float altura,total;
  scanf("%c %f",&op,&altura );
  op = toupper(op);
  if (!(op=='M' || op=='F')) {
    exit(-1);
  }
  printf("%f\n", (op == 'M') ? (72.7*altura)-58 : (62.1*altura)-44.7);

  return 0;
}
