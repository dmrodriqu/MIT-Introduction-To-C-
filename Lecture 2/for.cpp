/*
for
	for(initialization; condition; incrementation)
	{
		statement1;
		statement2;
		...
	} 

	the counter is initialized at the beginning of the loop
	it may be incrememnted/decremented upon each iteration
	curly braces may be omitted if one statement.

*/

//example
#include <iostream>
using namespace std;

int main(){
	for (int x = 0; x < 10; x ++)
	{
		cout<< x << "\n";
	}
}