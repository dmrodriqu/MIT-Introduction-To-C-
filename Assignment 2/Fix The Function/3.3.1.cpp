//solution 1: function prototypes

#include <iostream>

void printNum(int);

int main (){
	printNum(35);
	return 0;
}

void printNum(int number){
	std::cout<<number;
}


//solution 2: reorder

#include <iostream>

void printNum(int number){
	std::cout<<number;
}

int main (){
	printNum(35);
	return 0;
}


