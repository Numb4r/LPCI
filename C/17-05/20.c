#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int anos,meses,dias;
  scanf("%d %d %d",&anos,&meses,&dias );
  printf("%d\n",anos*365+meses*30+dias );
  return 0;
}
