#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i = 0,*pi = NULL;
  float j = 0,*pf = NULL;
  char c = ' ',*pc = NULL;
  pi = &i;
  pf = &j;
  pc = &c;
  printf("%d %f %c\n",*pi,*pf,*pc );
  *pi = 1;
  *pf = 3.4;
  *pc = 'a';
  printf("%d %f %c\n",*pi,*pf,*pc );
  return 0;
}
