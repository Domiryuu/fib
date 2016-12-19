#include <iostream>

int fib(int i);

int main(){
	for(int i = 1; i <= 100; i++){
		std::cout << fib(i) << std::endl;
	}
}

int fib(int i){
	return 1 > i ? 0 : 1 == i ? 1 : fib(i-1)+fib(i-2);
}
