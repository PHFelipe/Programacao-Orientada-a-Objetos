#ifndef VALIDACPF_h
#define VALIDACPF_h

#include <string>

using namespace std;

class Pessoa {
public:
  Pessoa(const string& nome, const string& CPF = "");

    string getNome() const;

    void setNome(const string& nome);

    string getCPF() const;

    void setCPF(const string& CPF);

    bool getCPFvalido() const;

    void setCPFvalido(bool CPFvalido);

    void apresentar() const;

private:
  string PessoaNome;
  string PessoaCPF;
  bool CPFvalido;
};

#endif
