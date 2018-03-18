#include <iostream>

int fib(int n, bool top){
	static int count = 0;
	int fibnumber;
	count++;
	if(n == 0 || n == 1){
		return n;
	}
	fibnumber = fib(n-1, false)+fib(n-2, false);
	if(top){std::cout<<count<<std::endl;}

}
int main(){
	fib(5, true);
	return 0;
}