#include <iostream>

int fib(int i);

int main(){
    int i = 0;
    std::cout << "Enter a number to view it's fibonacci number (index starts at 0)\n>";
    std::cin >> i;
	std::cout << fib(i) << std::endl;
	return 0;
}

int fib(int i){
	return 1 > i ? 0 : 1 == i ? 1 : fib(i-1)+fib(i-2);
}
