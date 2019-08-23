#include <iostream>
#include "Taxi.hpp"
#include <string>
using namespace std;

int main() {
  Taxi taxi;
  string modelo,motorizacao,fabricante,nome;
  float kminicial,kmfinal;
  cout << "Digite modelo do carro ";
  getline(cin,modelo);
  taxi.setNomeDoMotorista(nome);
  cout << "Digite motorizacao do carro ";
  getline(cin,motorizacao);
  taxi.setMotorizacaoDoCarro(motorizacao);
  cout << "Digite fabricante do carro ";
  getline(cin,fabricante);
  taxi.setFabricanteDoVeiculo(fabricante);
  cout << "Digite nome do motorista ";
  getline(cin,nome);
  taxi.setNomeDoMotorista(nome);
  cout << "Digite quilometragem inicial ";
  cin >> kminicial;
  taxi.setQuilometragemInicial(kminicial);
  cout << "Digite quilometragem final ";
  cin >> kmfinal;
  taxi.setQuilometragemFinal(kmfinal);

  cout << "O Preco da corrida sera " << taxi.valorDaCorrida()<<endl;


  return 0;
}
