#include <iostream>

int fib(int i);

int main(int argc, char *argv[]){
	for(int i = 1; i <= 25; i++){
		std::cout << fib(i) << std::endl;
	}
	return 0;
}

int fib(int i){
	return 1 > i ? 0 : 1 == i ? 1 : fib(i-1)+fib(i-2);
}
