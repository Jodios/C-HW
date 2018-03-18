#include <iostream>

int fib(int n){ 
	//Is it supposed to be
	//super slow? 
	if(n == 0 || n == 1){
		return n;
	}
	return fib(n-1)+fib(n-2);

}

int main(){
	std::cout<<"N = 09: "<<fib(9)<<std::endl;
	std::cout<<"N = 10: "<<fib(10)<<std::endl;
	return 0;
}