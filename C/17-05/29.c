#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int idade = 0;
  scanf("%d",&idade );
  if (idade > 5 && idade < 7) {
    printf("Categoria infantil A\n" );
  }else if (idade >= 8 && idade <= 10) {
    printf("Categoria infantil B\n" );
  }else if (idade >= 11 && idade <= 13) {
    printf("Categoria juvenil A\n" );
  }else if (idade >= 14 && idade <= 17) {
    printf("Categoria juvenil B\n" );
  }else{
    printf("Categoria adulto\n" );
  }
  return 0;
}
