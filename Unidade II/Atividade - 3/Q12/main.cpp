#include <iostream>

#include "arraylist.h"

int main() {
  ArrayList al(10);

  al.add(1).add(2).add(10).add(20);

  al.print();
  somaArray(al,5);
  al.print();
  subArray(al,5);
  al.print();
  mulArray(al,10);
  al.print();
  divArray(al,10);
  al.print();
  return 0;
}