#include <iostream>
#include "ValidaCPF.h"

int main(){
  //CPF ficticio valido
  string nome = "Henrique";
  string cpf = "52998224725";
  Pessoa pessoa1(nome,cpf);
  pessoa1.apresentar();

  //CPF ficticio igual e inválido
  nome = "Maria";
  cpf = "11111111111";
  Pessoa pessoa2(nome,cpf);
  pessoa2.apresentar();

  //CPF aleatorio e inválido
  nome = "Joao";
  cpf = "23478075810";
  Pessoa pessoa3(nome,cpf);
  pessoa3.apresentar();
  return 0;
}