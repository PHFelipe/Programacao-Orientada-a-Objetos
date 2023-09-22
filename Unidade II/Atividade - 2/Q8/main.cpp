#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(11,50,59);
  t.printUniversal();
  t.tick();
  t.printUniversal();
  cout<<"-------------"<<endl;
  Time t2(11,59,59);
  t2.printUniversal();
  t2.tick();
  t2.printUniversal();
  cout<<"-------------"<<endl;
  Time t3(23,59,59);
  t3.printUniversal();
  t3.tick();
  t3.printUniversal();
  return 0;
}
