#include <iostream>

class MyArray{
	int *pint;
public:
	MyArray();
	MyArray(int, int, int);
	~MyArray();
};

MyArray::MyArray(){
	std::cout << "Hello, World!" << std::endl;
};

MyArray::MyArray(int x, int y, int z){
	int p = new int[3];

	p[0] = new int[x];
	p[1] = new int[y];
	p[2] = new int[z];
	int size = sizeof(p)/sizeof(*p);
	for(int i = 0; i < size; i++){
		std::cout << *p << std::endl;
	}

};

MyArray::~MyArray(){
	std::cout << "Destructing x, y, z!" << std::endl;
};


int main(){

	MyArray ma(1,2,3);

	return 0;
}