#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float na,notas = 0,naluno;
  scanf("%f",&na );
  for (size_t i = 0; i < na; i++) {
    scanf("%f",&naluno );
    notas+=naluno;
  }
  printf("%0.2f\n",notas/na );

  return 0;
}
