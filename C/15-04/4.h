//TODO: Corrigir
void troca(int *a,int *b){
  int aux = *a;
  *a = *b;
  *b = aux;
}
//Forma visual
void troca_visual(int a,int b){
  int aux = a;
  a = b;
  b = aux;
  printf("%d %d\n",a,b );
}
