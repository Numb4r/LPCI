float peca(int idp1,int qp1,int vp1, int idp2,int qp2,int vp2,int ipi){
  int aux = (qp1*vp1)+(qp2*vp2);
  return aux+aux*ipi/100;
}
