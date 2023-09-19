// #include <iostream>
// using std::cout, std::endl;

// #include "arraylist.h"

// ArrayList::ArrayList(int tam) : pos(0) {
//   if (tam > 0) {
//     this->tam = tam;
//     arr = new int[tam];
//   } else {
//     arr = nullptr;
//     this->tam = 0;
//   }
// }

// ArrayList::~ArrayList() {
//   if (arr)
//     delete[] arr;
// }

// ArrayList &ArrayList::add(int v) {
//   if (pos < tam)
//     arr[pos++] = v;

//   return *this;
// }

// void ArrayList::print() const {
//   for (int i = 0; i < pos; i++)
//     std::cout << arr[i] << " ";
//   std::cout << std::endl;
// }

// void somaArray (ArrayList &array,int s){
//   for(int i=0;i < array.pos;i++){
//     array.arr[i] += s;
//   }
// }

// void subArray (ArrayList &array,int sb){
//   for(int i= 0;i < array.pos;i++){
//     array.arr[i] -= sb;
//   }
// }

// void mulArray (ArrayList &array,int mt){
//   for(int i= 0;i < array.pos;i++){
//     array.arr[i] *= mt;
//   }
// }

// void divArray (ArrayList &array,int div){
//   for(int i= 0;i < array.pos;i++){
//     array.arr[i] /= div;
//   }
// }