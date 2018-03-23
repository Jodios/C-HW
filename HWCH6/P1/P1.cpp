#include <iostream>

class SuperVar{
private://----------------------
	enum{
		short_int,
		integer,
		floating_point,
		type_double
	} vartype;
	union{
		short int si;
		int i;
		float f;
		double d;
	};
public://------------------------
	SuperVar(short int);
	SuperVar(int);
	SuperVar(float);
	SuperVar(double);
	int getINT();
	void print();
};


SuperVar::SuperVar(short int si){
	vartype = short_int;
	this->si = si;
}
SuperVar::SuperVar(int i){
	vartype = integer;
	this->i = i;
}
SuperVar::SuperVar(float f){
	vartype = floating_point;
	this->f = f;
}
SuperVar::SuperVar(double d){
	vartype = type_double;
	this->d = d;
}
int SuperVar::getINT(){return this->i;}
void SuperVar::print(){
	switch (vartype){
		case short_int:
			std::cout << "short int: " << si << std::endl;
			break;
		case integer:
			std::cout << "integer: " << i << std::endl;
			break;
		case floating_point:
			std::cout << "float: " << f << std::endl;
			break;
		case type_double:
			std::cout << "double: " << d << std::endl;
			break;
	}
	
}


int main(){
	SuperVar w(42), 
			 x(static_cast<short int>(w.getINT())), 
			 y(static_cast<float>(w.getINT())), 
			 z(static_cast<double>(w.getINT()));

	w.print();
	x.print();
	y.print();
	z.print();
	return 0;
}