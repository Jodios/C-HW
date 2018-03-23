#include <iostream>

class MyArray{
	int *pint;
public:
	MyArray();
	MyArray(int, int, int);
	~MyArray();
};

MyArray::MyArray(){
	pint = new int[3];
	for(int i = 0; i < 3; i++){
		pint[i] = 0;
	}
};

MyArray::MyArray(int x, int y, int z){
	pint = new int[3];
	pint[0] = x;
	pint[1] = y;
	pint[2] = z;
};

MyArray::~MyArray(){
	std::cout << "destructing: " << pint[0] << " " << pint[1] << " " << pint[2] << std::endl;
	delete [] pint;
	pint = NULL;
};


int main(){

	MyArray ma(1,2,3), p;


	return 0;
}