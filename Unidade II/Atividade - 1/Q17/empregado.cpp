#include <iostream>
using std::cout, std::endl;

#include "empregado.h"

empregado::empregado(string nome,string sobrenome,int salario){
  setNome(nome);
  setSobrenome(sobrenome);
  setSalario(salario);
}
void empregado::setNome(string nome) {
  if (nome == "")
    nome = "--";
  empregadoNome = nome;
}

void empregado::setSobrenome(string sobrenome){
  if(sobrenome == "")
    sobrenome = "--";
  empregadoSobrenome = sobrenome;
}

void empregado::setSalario(int salario){
  if(salario < 0)
    salario = 0;
  empregadoSalario = salario;
}

string empregado::getNome(){
  return empregadoNome;
}

string empregado::getSobrenome(){
  return empregadoSobrenome;
}

int empregado::getSalario(){
  return empregadoSalario;
}

void empregado::displaymessage(){
  std::cout<<"Empregado: "<<getNome()<<" "<<getSobrenome()<<";"<<endl<<"Salário: R$"<<getSalario()<<";"<<endl;
}