#include "chapeu.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void Chapeu::recepcionar() const {
  cout << "\033[1mNão há nada escondido em sua cabeça que o Chapéu Seletor não "
          "consiga ver, por isso é só me porem na cabeça que vou dizer em que "
          "casa de Hogwarts deverão ficar\033[0m"
       << endl<<endl;
}

string Chapeu::sortearCasa() {
  
  int numeroAleatorio = rand() % 4;
  
  switch (numeroAleatorio) {
  case 0:
    this->casa = "Grifinória";
  case 1:
    this->casa = "Sonserina";
  case 2:
    this->casa ="Corvinal";
  case 3:
    this->casa = "Lufa-Lufa";
  }
  return casa;
}

void Chapeu::display(){
  cout<<"E a casa selecionada foi: "<<sortearCasa()<<endl;
}