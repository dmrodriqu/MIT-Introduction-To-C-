/*
while
	while(condition)
	{
	 	statement1
	 	statement2
		...
	}

	as long as the statement holds true
	the block will continue to execute

*/

// example
#include <iostream>
using namespace std;

int main() {
	int x = 0;
	while(x< 10)
	{
		x++;
		cout << "x is " << x << "\n";
	}
}