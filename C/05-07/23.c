#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
  char nome[30];
  int idade;
}Pessoa;

int main(int argc, char const *argv[]) {
  Pessoa *p1 = (Pessoa*)malloc(sizeof(Pessoa));
  scanf("%s",p1->nome);
  scanf("%d",&p1->idade );
  printf("%s %d\n",p1->nome,p1->idade );
  free(p1);
  return 0;
}
