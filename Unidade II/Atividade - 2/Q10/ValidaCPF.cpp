#include "ValidaCPF.h"
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

// estou utilizando passagem por referencia para uma maior performance do meu
// código

// ATENÇÃO: no enunciado é solicitado a utilização do argumento padrao
// CPFvalido, porém neste código eu decidi por nao utiliza-lo por padrão,
// tornando assim o código o mais funcional e aplicado possivel!
Pessoa::Pessoa(const string &nome, const string &CPF) {
  setNome(nome);
  setCPF(CPF);
}

string Pessoa::getNome() const { return PessoaNome; }

void Pessoa::setNome(const string &nome) { PessoaNome = nome; }

string Pessoa::getCPF() const { return PessoaCPF; }

void Pessoa::setCPF(const string &CPF) {
  //  Validação de Entrada
  if (CPF.length() == 11) {
    int valido = 1;

    int igual = 0;
    for (char c : CPF) {
      if (!isdigit(c)) {
        setCPFvalido(false);
        valido = 0;
        break;
      }
      if (CPF[0] == c) {
        igual += 1;
        if (igual == 9) {
          setCPFvalido(false);
          valido = 0;
          break;
        }
      }
    }
    if (valido == 1) {
      setCPFvalido(true);
      PessoaCPF = CPF;
    }
  } else {
    setCPFvalido(false);
  }
  //  Validação de CPF de acordo com o Min.Fazenda
  int digito1 = 0;
  for (int i = 0; i < 9; i++) {
    int digito = CPF[i] - '0';
    digito1 += digito * (10 - i);
  }
  digito1 = (digito1 * 10) % 11;
  //  Validação digito1
  if (CPF[9] -'0' != digito1) {
    setCPFvalido(false);
  } else {

    long long digito2 = 0;

    for (int i = 0; i < 10; i++) {
      int digito = CPF[i] - '0';
      digito2 += digito * (11 - i);
    }
    digito2 = (digito2 * 10) % 11;
    // Validação digito2
    if (CPF[10] -'0' != digito2) {
      setCPFvalido(false);
    }
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