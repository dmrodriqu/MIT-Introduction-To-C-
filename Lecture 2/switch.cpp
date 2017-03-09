/*

switch syntax:

switch (expression){
	case constant1:
		statementA
		statementA2
		...
		break,
	case constant2:
		statementB
		statementB2
		...
		break,
	default:
		statementZ
		statementZ2
		...
}

switch evaluates the expression.
if the expression is equal to constant:
then statements contained in constant1 are executed until break encountered
if not equal to constant, then compared to constant2, statements executed
if none are matched, default encountered and statements executed

switch case are cleaner than if/else

*/

// example
#include <iostream>
using namespace std;

int main(){
	int x = 6;
	switch (x){
		case 1:
			cout << "x is 1\n";
			break;
		case 2:
		case 3:
			cout << "x is 2 or 3\n";
			break;
		default:
			cout << "x is not 1, 2 or 3\n";
	}
	return 0;
}