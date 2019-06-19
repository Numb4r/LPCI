#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QNTALUNOS 12
#define QNTQUESTOES 8
//NAO TO AFIM DE TRABALHAR COM STRING
void debug_Vetor(int TAM,char vet[]) {
  for (size_t i = 0; i < TAM; i++) {
    printf("%zu - > %c\n",i,vet[i] );
  }
}
int main(int argc, char const *argv[]) {
  char *gabarito = (char*)malloc(sizeof(char));
  char *questoesAlunos = (char*)malloc(sizeof(char));
  int matriculas[QNTALUNOS],notas[QNTALUNOS];
  int  i  = 0,aprovados = 0;
  printf("Entre com as questoes do gabarito [%d]",QNTQUESTOES);
  do {
    scanf("%s",gabarito );
    if (strlen(gabarito) != QNTQUESTOES) {
      printf("Numero de questoes invalida,entre com o numero de questoes correta: " );
    }
  } while(strlen(gabarito) != QNTQUESTOES);
  debug_Vetor(strlen(gabarito),gabarito);
  while(i < QNTALUNOS){
    notas[i] = 0;
    printf("Entre com a matricula do aluno: " );
    scanf("%d",&matriculas[i]);
    printf("Entre com as questoes do %d aluno: ",i+1 );

    do {
      /* code */
      scanf("%s",questoesAlunos );

      if (strlen(questoesAlunos) != QNTQUESTOES) {
        printf("Numero de questoes invalida,entre com o numero de questoes correta: " );
      }
    } while(strlen(questoesAlunos)!=QNTQUESTOES);

    for (size_t j = 0; j < QNTQUESTOES; j++) {
      printf("%c-%c\n",gabarito[j],questoesAlunos[j] );
      if (gabarito[j] == questoesAlunos[j]) {
        notas[i]++;
      }
    }
    i++;
  }
  for (size_t i = 0; i < QNTALUNOS; i++) {

    printf("%d - > %d\n",matriculas[i],notas[i] );
    if (notas[i] >= 5) {
      aprovados++;
    }
  }
  printf("A quantidade de aprovados e %d\n",aprovados );

  return 0;
}
