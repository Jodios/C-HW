#include <iostream>

class Fraction{
  int numer;
  int denom;
  static int counter;
  bool isCopy = false;
public:
  Fraction(int n = 0, int d = 1):numer(n), denom(d){counter++;};
  Fraction(const Fraction &fRef){
    numer = fRef.numer;
    denom = fRef.denom;
    counter++;
    isCopy = true;
  }
  ~Fraction(){counter--;}
  int getNumer(){return numer;}
  int getDenom(){return denom;}
  void setNumer(int numer){this->numer = numer;}
  void setDenom(int denom){this->denom = denom;}
  void print(){
    if(isCopy){
      std::cout << "----------COPY----------" << std::endl;
      isCopy = false;
    }
    std::cout << "Objects in existence: " << counter << std::endl;
    std::cout << "Numer: " << numer << "\nDenom: " << denom << std::endl;
    std::cout << "\n";
  }

};

int Fraction::counter = 0;

Fraction foo(Fraction &fRef){
  return fRef;
}

int main(){
  Fraction a[10];
  for(int i = 0; i < 10; i++){
    a[i].setNumer(5);
    a[i].setDenom(8);
  }
  Fraction b[10] = a;
  a[0].print();
  b[9].print();

  return 0;
}

