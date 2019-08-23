#include <iostream>
#include "Pessoa.hpp"

using namespace std;

//SET
void Pessoa::setNome(string nome){
    this->nome=nome;
}
void Pessoa::setPeso(float peso){
  this->peso = peso;
}
void Pessoa::setAltura(float altura){
  this->altura = altura;
}
void Pessoa::setSexo(char sexo){
  this->sexo = sexo;
}
//GET
string Pessoa::getNome(){
  return nome;
}
float Pessoa::getPeso(){
  return peso;
}
float Pessoa::getAltura(){
  return altura;
}
char Pessoa::getSexo(){
  return sexo;
}

void Pessoa::imprimir(){
  cout<<"--------------"<<endl;
  cout<<"Nome: "<<nome<<endl;
  cout<<"Sexo: "<<sexo<<endl;
  cout<<"Altura: "<<altura<<endl;
  cout<<"Peso: "<<peso<<endl;

}
