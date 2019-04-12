float media_9(int a,int b,int c){
  return (a+b+c)/3;
}
float desvio_padrao(int a,int b,int c){
  float aux = media_9(a,b,c);
  
  return sqrt((pow(a-aux,2)+pow(b-aux,2)+pow(c-aux,2))/2);
}
