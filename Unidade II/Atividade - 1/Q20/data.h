#ifndef data_h
#define data_h

class data{
  public:
    data(int dia, int mes,int ano);
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();
    void mostrarData();
    
  private:
    int dataDia;
    int dataMes;
    int dataAno;
};

#endif