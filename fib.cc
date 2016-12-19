#include <iostream>

int fib(int i);

int main(){
	for(int i = 1; i <= 100; i++){
		std::cout << fib(i) << std::endl;
	}
}

int fib(int i){
	if(1 > i){
		return 0;
	}else if(1==i){
		return 1;
	}
	return (fib(i -1)) + (fib(i-2));
}
