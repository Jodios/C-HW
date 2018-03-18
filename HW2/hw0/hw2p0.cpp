#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main(){

	cout << "unsigned short int max: "<< std::numeric_limits<unsigned short int>::max() << endl;
	cout << "unsigned short int min: "<< std::numeric_limits<unsigned short int>::min() << "\n\n";

	cout << "signed long int max: "<< std::numeric_limits<signed long int>::max() << endl;
	cout << "signed long int min: "<< std::numeric_limits<signed long int>::min() << "\n\n";

	cout << "signed long long int max: "<< std::numeric_limits<signed long long int>::max() << endl;
	cout << "signed long long int min: "<< std::numeric_limits<signed long long int>::min() << "\n\n";

	cout << "float max: "<< std::numeric_limits<float>::max() << "\n\n";

	cout << "double max: "<< std::numeric_limits<double>::max() << "\n\n";

	cout << "long double max: "<< std::numeric_limits<long double>::max() << "\n\n";


	return 0;
}

