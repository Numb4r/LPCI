#include <iostream>
#include "Pessoa.hpp"

using namespace std;

int main() {
  Pessoa p,z;
  float peso,altura;
  char s;
  string nome;

  cout << "Digite o nome ";
  getline(cin,nome);
  p.setNome(nome);
  cout << "Digite sexo ";
  cin >> s;
  p.setSexo(s);
  cout << "Digite altura ";
  cin>>altura;
  p.setAltura(altura);
  cout<<"Digite seu peso ";
  cin>>peso;
  p.setPeso(peso);
  p.imprimir();
  return 0;
}
