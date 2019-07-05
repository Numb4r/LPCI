#include <stdio.h>
#include <stdlib.h>

void preecher(int vet[],int a){

  for (int i = 0; i < 10; i++) {
    *(vet+i) = a;
  }
}
int main(int argc, char const *argv[]) {
  int vet[10] , a = 0;
  scanf("%d",&a );
  preecher(vet,a);

  for (size_t i = 0; i < 10; i++) {
    printf("%d\n",*(vet+i) );
  }
  return 0;
}
