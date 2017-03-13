#include <iostream>

using namespace std

/*

function declarations

*/
// return type // func name // data type, var name
int raiseToPower(int base, int exponent){ //signature
	int result = 1;
	for (int i = 0; i < exponent; i = i + 1)  // body
		{
			result = result * base;
		}
	return result; // returns var  --> return statement
}

/*

up to one value may be returned; it must be the same
type as the return type

no values are returned, give void return type

*/

void printNumber(int num) {
	cout << "number is " << num << endl;
}

/*

CANNOT declare var of type void

*/


/*

function returns as soon as return encountered

*/

void printNumberIfEven(int num) {
	if (num % 2 == 1)
	{
		cout << "odd number" << endl;
		return;
	}
	cout << "even number; number is " << num << endl;
}

