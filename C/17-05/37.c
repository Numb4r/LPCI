#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int h_inicio,h_final;
  scanf("%d %d",&h_inicio,&h_final );
  if (h_inicio > h_final)
    printf("%d\n",24+(h_final - h_inicio));
  else
    printf("%d\n",h_final - h_inicio );

  return 0;
}
