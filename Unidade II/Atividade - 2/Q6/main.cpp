#include "pessoa.h"
#include <iostream>

using namespace std;

int main() {
  // teste válido
  string nome = "Paulo";
  string CPF = "87543908764";

  Pessoa pessoa1(nome, CPF);
  pessoa1.apresentar();

  // pessoa com numero faltando
  nome = "Maria";
  CPF = "1048749651";

  Pessoa pessoa2(nome, CPF);
  pessoa2.setCPFvalido(false);
  pessoa2.apresentar();

  // pessoa com letra no CPF
  nome = "Victor";
  CPF = "172385964a1";

  Pessoa pessoa3(nome, CPF);
  pessoa3.setCPFvalido(false);
  pessoa3.apresentar();

  return 0;
}
