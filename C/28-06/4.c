#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função de lotação do ônibus
int onibus_lotado(int vetor[]){
  int aux=0;
    for (int i=0; i<48; i++){
      if (vetor[i]==0){
        aux++;
      }
    }
    return aux;
}

// Função para pausar.
void pause(){
  printf("\n\tPressione ENTER para continuar ");
    char c;
    while((c = getchar()) != '\n' && c != EOF){};
    while((c = getchar()) != '\n' && c != EOF){};
}

// Função de Venda de passagens
int venda(int vetor[]){
  if (onibus_lotado(vetor)== 0){
    printf ("\n Onibus Lotado!");
    pause();
    return 0;
  }

  int aux=0;
  printf ("\n Escolha a poltrona: ");
  scanf ("%d", &aux);
  if (aux > 48 || aux < 1) {
    printf("\n Assento fora do onibus\n" );
    pause();
    return 0;
  }else if (vetor[aux-1]==1){
      printf ("\n Assento Ocupado!");
      pause();
      return 0;
    }
    else {
      printf ("\n Compra realizada!");
      vetor[aux-1]=1;
      pause();
      return 1;
    }
  }

// Função de mostrar mapa de poltronas do ônibus
void mostrar_assentos(int assentos[]){

    printf ("janela\tcorredor\t\t\tcorredor  janela\n");
      for (int i=0; i<48; i++){

        if (assentos[i] == 0) {
          printf("\033[0;32m");
          printf ("   %d    ", assentos[i]);
          printf("\033[0m");
        }else{
          printf("\033[0;31m");
          printf ("   %d    ", assentos[i]);
          printf("\033[0m");
        }

          if ((i+1)%2==0 && (1+i)%4!=0){
            printf ("\t\t\t");
          }
          else if ((1+i)%4==0){
            printf("\n" );
          }
      }
      pause();
}

//Função do Menu de Opções
void menu_grafico(){
  for(int i = 0;i<1000;i++)
    printf("\n");
  printf("====================================================================\n");
  printf("\t\tSistema de Venda de Passagens Rodoviarias \n");
  printf("\t****************************************************\n\n\n" );
  printf("\t1. Venda de Passagens \n");
//  printf("\t2. Para quantidade poltronas livres \n");
  printf("\t2. Quantidade poltronas livres \n");
  //printf("\t3. Para mapa de ocupacao do onibus\n");
  printf("\t3. Mapa de ocupacao do onibus\n");
  printf("\t0. SAIR \n\n");
  printf("\n=====================================================================\n");
  printf(">");
}

int main( ){
int aux=0, vetor[48];
    for (int i=0; i<48; i++)
      vetor[i]=0;
    do {
      menu_grafico();
      scanf ("%d", &aux);
      switch (aux){
        case 1:
          venda(vetor);
          break;
        case 2:
          printf ("%d Lugares livres", onibus_lotado(vetor));
          pause();
          break;
        case 3:
          mostrar_assentos(vetor);
          break;
      }
}
    while (aux != 0);


  return 0;
}
