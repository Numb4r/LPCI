#include <iostream>
#include "Taxi.hpp"

using namespace std;

void Taxi::setModelodoCarro(string modelo_do_carro){
  this->modelo_do_carro=modelo_do_carro ;
}
void Taxi::setMotorizacaoDoCarro(string motorizacao_do_carro){
  this->motorizacao_do_carro= motorizacao_do_carro;
}
void Taxi::setFabricanteDoVeiculo(string fabricante_do_veiculo){
  this->fabricante_do_veiculo = fabricante_do_veiculo;
}
void Taxi::setNomeDoMotorista(string nome_do_motorista){
  this->nome_do_motorista = nome_do_motorista;
}
void Taxi::setQuilometragemInicial(float quilometragem_inicial){
  this-> quilometragem_inicial=quilometragem_inicial ;
}
void Taxi::setQuilometragemFinal(float quilometragem_final){
  this->quilometragem_final = quilometragem_final;
}

//GETS
string Taxi::getModelodoCarro(){
  return modelo_do_carro;
}
string Taxi::getMotorizacaoDoCarro(){
  return motorizacao_do_carro;
}
string Taxi::getFabricanteDoVeiculo(){
  return fabricante_do_veiculo;
}
string Taxi::getNomeDoMotorista(){
  return nome_do_motorista;
}
float Taxi::getQuilometragemInicial(){
  return quilometragem_inicial;
}
float Taxi::getQuilometragemFinal(){
  return quilometragem_final;
}

float Taxi::valorDaCorrida(){
  return (quilometragem_final-quilometragem_inicial)*3.75;
}
