#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int x1,x2,y1,y2;
  scanf("%d %d",&x1,&y1 );
  scanf("%d %d",&x2,&y2 );
  printf("%f",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
  return 0;
}
