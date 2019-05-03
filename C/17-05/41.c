#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int hi,mi,ht,mt,hd,md;
  scanf("%d %d",&hi,&mi );
  scanf("%d %d",&ht,&mt );
  if (mi > 60 || mt > 60 || hi > 24 || ht > 24) {
    printf("Formato invalido\n");
    exit(-1);
  }
  hd = hi > ht ? (ht - hi) + 24  : ht - hi;
  md = mi > mt ?  (mt - mi) + 60  : mt - mi;
  printf("%d : %d\n",hd,md );


  return 0;
}
