#ifndef VIRATEMPO_H
#define VIRATEMPO_H

class ViraTempo {
public:
  ViraTempo(int N);

  void mostrarTempo() const;
  void avancarTempo();
  void virarTempo();

private:
  int valorAtual;
  int limiteTempo;
  bool avancandoTempo;
};

#endif