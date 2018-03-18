#include <iostream>

int swap(int &x, int &y){
	x^=y;
	y^=x;
	x^=y;
}
int main(){
	int x = 4, y = 5;
	swap(x,y);
	std::cout << x << " " << y << std::endl;
	return 0;
}