#include <iostream>
#include "cupom.h"

using std::endl,std::cout;

int main(){
  //Na implementação do construtor caso nao seja enviado nenhum id o id será gerado automaticamente com 6 digitos
  cupom item1("","leite condensado",10,9.50);
  cupom item2("1","ovos",12,3.0);
  item1.displaymessage();
  item2.displaymessage();
  return 0;
}