#include "banco.h"
#include <iostream>

using std::endl;

int main() {
  ContaBanco cliente1(1035.90);
  ContaBanco cliente2(-1);
  
  std::cout<<"\033[1;34mcliente 1:\033[0m"<<endl;
  cliente1.displaymessage();

  cliente1.creditar(500.0);
  cliente1.displaymessage();
  
  cliente1.debitar(20000);
  cliente1.displaymessage();

  std::cout<<"\033[1;34mcliente 2:\033[0m"<<endl;
  cliente2.debitar(10.0);
  cliente2.displaymessage();

  cliente2.creditar(-50.4);
  cliente2.displaymessage();
  return 0;
}
