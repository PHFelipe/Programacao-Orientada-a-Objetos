#include "pessoa.h"
#include <cctype>
#include <iostream>

using namespace std;

// estou utilizando passagem por referencia para uma maior performance do meu
// código

Pessoa::Pessoa(const string &nome, const string &CPF, bool CPFvalido) {
  setNome(nome);
  setCPF(CPF);
}

string Pessoa::getNome() const { return PessoaNome; }

void Pessoa::setNome(const string &nome) { PessoaNome = nome; }

string Pessoa::getCPF() const { return PessoaCPF; }

void Pessoa::setCPF(const string &CPF) {
  if (CPF.length() == 11) {
    PessoaCPF = CPF;
  }
}

bool Pessoa::getCPFvalido() const { return CPFvalido; }

void Pessoa::setCPFvalido(bool valido) { CPFvalido = valido; }

void Pessoa::apresentar() const {
  cout << "Nome: " << PessoaNome << endl
       << "CPF: " << PessoaCPF << " "
       << "("
       << (CPFvalido ? "\033[92mVálido\033[0m" : "\033[31mInválido\033[0m")
       << ")" << endl;
  cout << "----------------------------" << endl;
}