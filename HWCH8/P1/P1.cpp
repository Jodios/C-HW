#include <iostream>

void problem_a(long long const* llp, short size){
	for(int i = 0; i < size; i++){
		std::cout << *llp << std::endl;
		*llp++;
	}
}
// void problem_b(long long const* llp){
// 	llp[4] = 10000000000;
// }
void problem_c(long long* llp){
	llp[4] = 1;
}

int main(){
	long long arr[10];
	short size = sizeof(arr)/sizeof(*arr);

	for(int i = 0; i < size; i++){ 
		arr[i] = 10000000000 * static_cast<long long>(i+1);
		// std::cout << arr[i] << std::endl;
	} 

	long long const* llp = arr;
	// problem_a(llp, size);
	//problem_b(llp);
	problem_c(arr);
	std::cout << arr[4] << std::endl;
	


	//
	return 0;
}