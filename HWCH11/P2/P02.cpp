#include <iostream>

class Fraction{
  int numer;
  int denom;
  static int counter;
public:
  Fraction(int n = 0, int d = 1):numer(n), denom(d){counter++; print();};
  Fraction(const Fraction &fRef){
    numer = fRef.numer;
    denom = fRef.denom;
    counter++;
    std::cout << "--------" << std::endl;
    std::cout << "|copied|" << std::endl;
    std::cout << "--------" << std::endl;
    print();
  }
  int getNumer(){return numer;}
  int getDenom(){return denom;}
  void setNumer(int numer){this->numer = numer;}
  void setDenom(int denom){this->denom = denom;}
  void print(){
    std::cout << "Objects in existence: " << counter << std::endl;
    std::cout << "Numer: " << numer << "\nDenom: " << denom << std::endl; 
  }

};

int Fraction::counter = 0;

Fraction foo(Fraction &fRef){
  return fRef;
}

int main(){

  Fraction f1(41,42), f2 = foo(f1);

  return 0;
}

