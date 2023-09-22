#ifndef empregado_H
#define empregado_H

#include <string>

using std::string;

class empregado {

public:
  empregado(string nome, string sobrenome, int salario);

  void setNome(string nome);

  void setSobrenome(string sobrenome);

  void setSalario(int salario);

  string getNome();

  string getSobrenome();

  void displaymessage();

  int getSalario();

private:
  string empregadoNome;
  string empregadoSobrenome;
  int empregadoSalario;
};

#endif