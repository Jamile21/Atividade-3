using namespace std;

namespace crt{
  void calculos()
  {
  float R1,R2;
  float Rs, Rp;
  float V,I,P;

  cout << "Analise de Circuito Serie-Paralelo" << endl;
  cout<<"Insira o valor da fonte (volts):"<<endl;
  cin>> V;
  cout << "Insira os valores das resistencias (ohms)\nR1:\t";
  cin >> R1;
  cout << "R2:\t";
  cin >> R2;

  Rs=R1+R2;
  Rp=(R1*R2)/(Rs);
  I=V/Rs;
  P=V/I;
cout<<"A resistencia em serie é:"<<Rs<<endl;
cout<<"A resistencia em pararelo é:"<<Rp<<endl;

  }
}