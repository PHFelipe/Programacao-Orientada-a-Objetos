#include "viratempo.h"
#include <iostream>

using namespace std;

ViraTempo::ViraTempo(int N) {
  if (N >= 0) {
    limiteTempo = N;
    valorAtual = 0;
    avancandoTempo = true;
  } else {
    cout << "Limite inválido!" << endl;
  }
}

void ViraTempo::mostrarTempo() const {
  cout << "Tempo atual: " << valorAtual << endl;
}

void ViraTempo::avancarTempo() {
 if(avancandoTempo){
   if(valorAtual<limiteTempo){
   valorAtual++;
   }
 }else{
   if(valorAtual > 0){
   valorAtual--;
   }
 }
}

void ViraTempo::virarTempo() { 
  avancandoTempo = !avancandoTempo; 
}
