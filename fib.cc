#include <iostream>

uint64_t fib(uint64_t i);

int main(){
    uint64_t i = 0;
    std::cout << "Enter a number to view it's fibonacci number (index starts at 0)\n> ";
    std::cin >> i;
    std::cout << fib(i) << std::endl;
    return 0;
}

uint64_t fib(uint64_t i){
    return 0 == i ? 0 : 1 == i ? 1 : fib(i-1)+fib(i-2);
}
