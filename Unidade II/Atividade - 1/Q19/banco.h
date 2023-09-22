#ifndef banco_h
#define banco_h

class ContaBanco {
public:
  ContaBanco(double saldo);

  double getSaldo();
  void creditar(double quantia);
  void debitar(double quantia);
  void displaymessage();

private:
  double saldo;
};

#endif
