/*
relational vs logical operators
>
<
==
etc are relational

&& and
|| or
! 
are logical



if statements:

if(condition)
{
	statement
	statement
	...
}
if only one if statement curly braces may be omitted

if(cond)
	statement

if(cond)
{
	statement
	statement
}
else
{
	
}

if there are multiple conditions (must choose between a or b)
if condition 1 is met then block 1 is executed. iff condition 2
is met will block 2 be executed
if(condition 1){
	statement
	statement
}
else if(condition 2){
	statement
	statement
}

*/

// example
#include <iostream>
using namespace std;

int main(){
	int x = 6;
	int y = 2;
	if (x>y)
		cout << "x is greater than y\n";
	else if(y>x)
		cout << "y is greater than x\n";
	else
		cout << "x and y are equal\n";
	return 0;
}