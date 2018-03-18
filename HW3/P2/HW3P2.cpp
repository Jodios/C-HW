#include <iostream>

using namespace std;

class Hen{
public:
    
  class Nest{
  public:
    
    class Egg{
    public:    
        void display(){cout << "I am Egg" << endl;}
    };
    
    void display(){cout << "I am Nest" << endl;}
  };
  
  void display(){cout << "I am Hen :)" << endl;}
};


int main(){
    Hen h;
    Hen::Nest n;
    Hen::Nest::Egg e;
    
    h.display();
    n.display();
    e.display();
    
    
    return 0;
}