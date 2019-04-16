#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int notas=0,aux;
  for (size_t i = 0; i < 4; i++) {
    scanf("%d",&aux );
    notas+=aux;
  }
  notas/=4;
  if (notas>=7) {
    printf("Aprovado\nMedia-> %d\n",notas );

  }else{
    printf("Aluno em exame\nInforme a nota da final:" );
    scanf("%d",&aux );
    notas+=aux;
    notas/=2;
    if (notas>=5) {
      printf("Aluno aprovado\nMedia-> %d",notas );
    }else{
      printf("Aluno reprovado\nMedia-> %d",notas );
    }
  }

  return 0;
}
