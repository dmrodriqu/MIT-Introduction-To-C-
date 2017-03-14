#include <iostream>

void printNum(int number) { std::cout << number; };

int main(){
	int number = 35;
	printNum(number);
	return 0;
}

/*
a global variable can be used, but then the variable 'number'
can be referenced from anywhere in the file scope
*/