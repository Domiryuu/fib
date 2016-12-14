#include <iostream>

int fib(int i);

int main(){
	for(int i = 0; i < 100; i++){
		std::cout << fib(i) << std::endl;
	}
}

int fib(int i){
	if(i < 1){
		return 0;
	}else{
		if(i==1){
			return 1;
		}
	}
	return (fib(i -1)) + (fib(i-2));
}
