#include <iostream>

using namespace std;

struct Rational{
	int numer,denom;
	void assign(int, int);
	double convert_to_double();
	void reciprocal();
	void print();
};

void Rational::assign(int numer, int denom)
{
	this->numer = numer;
	this->denom = denom;
}
double Rational::convert_to_double()
{
	return (double)this->numer / this->denom;
}
void Rational::reciprocal()
{
	cout << this->denom << "/" << this->numer << endl;
}
void Rational::print()
{
	cout 
	    << "Double: " << convert_to_double()
		<< "\nReciprocal: "; reciprocal();
			
}

int main(){
	Rational r;
	r.assign(4,5);
	r.print();
}
