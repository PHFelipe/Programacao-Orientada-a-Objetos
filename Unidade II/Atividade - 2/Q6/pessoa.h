#ifndef pessoa_h
#define pessoa_h

#include <string>

using namespace std;

class Pessoa {
public:
  Pessoa(const string &nome, const string &CPF = "", bool CPFvalido = true);

  string getNome() const;

  void setNome(const string &nome);

  string getCPF() const;

  void setCPF(const string &CPF);

  bool getCPFvalido() const;

  void setCPFvalido(bool CPFvalido);

  void apresentar() const;

private:
  string PessoaNome;
  string PessoaCPF;
  bool CPFvalido;
};

#endif
