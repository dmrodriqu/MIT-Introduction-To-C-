/*
4.4.1

Here is the code for a factorial program. 

Copy it into your IDE and verify that it compiles.

*/

#include <iostream> 

using namespace std;

int main(){

	short number;
	cout << "Enter a number: "; 
	cin >> number;
	cout << "The factorial of " << number << " is "; 
	int accumulator = 1;
	for(; number > 0; accumulator *= number--);
	cout << accumulator << ".\n";
	return 0;

 }
/*
What do you get when you enter the following values: 

0:        1
1:        1
2:        2
9:   362880
10: 3628800

*/