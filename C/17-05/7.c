#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int terceira = 0,serie = 0,livros_lidos = 0,quantidade_MAX_livros = 0,redacao_OP = 0,idade = 0;
  printf("Entre Com a idade : " );
  scanf("%d",&idade );
  while (idade!= 0 ) {
    printf("Entre com a serie: " );
    scanf("%d",&serie );
    printf("Entre com a quantidade de livros livos: " );
    scanf("%d",&livros_lidos );
    printf("Gosta de produzir redacao ? \n(1-Sim) (2-Nao)\n " );
    scanf("%d",&redacao_OP );
    if (serie == 4 && livros_lidos > quantidade_MAX_livros) {
      quantidade_MAX_livros = livros_lidos ;
    }
    if (serie == 3) {
     terceira++;
   }
    printf("Entre Com a idade : " );
    scanf("%d",&idade );
  }
  printf("Sao %d alunos da terceira serie \n",terceira );
  printf("%d e o numero maximo de livros lidos por um aluno da quarta serie \n",quantidade_MAX_livros );
  return 0;
}
