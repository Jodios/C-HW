#include <iostream>

using namespace std;

class X{
    int x1, x2;
    friend class Y;
public:
    void init(int a, int b){x1 = a; x2 = b;}
};

class Y{
    friend class Z;
public:
    void print(X& x){
        cout << "x1 = " << x.x1 << endl;
        cout << "x2 = " << x.x2 << endl;
    }
};

class Z{
public:
    void print(X& x){
        cout << "x1 = " << x.x1 << endl;
        cout << "x2 = " << x.x2 << endl;
    }
};

int main(){
    X x;
    Y y;
    Z z;
    x.init(42,43);
    y.print(x);
    cout << "---------Z class---------" << endl;
    z.print(x);
    return 0;
}