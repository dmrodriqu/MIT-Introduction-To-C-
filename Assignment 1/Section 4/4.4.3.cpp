/*
4.4.3 / 4.4.4

Try entering some larger numbers. 
What is the minimum number for which your modified program from 4.2 stops working properly? 
(You shouldn’t have to go past about 25. 
You may find Google’s built-in calculator useful in checking factorials.) 
Can you explain what has happened?


*/

#include <iostream> 

using namespace std;

int main(){

	short number;
	cout << "Enter a number: "; 
	cin >> number;
	if(number<0)
	{
		cout<< "Entered a negative" << "\n";
	}
	else if(number >= 20)
	{
		cout << "overflow" << "\n";
	}
	else
	{
		cout << "The factorial of " << number << " is "; 
		int accumulator = 1;
		for(; number > 0; accumulator *= number--);
		cout << accumulator << ".\n";
	}
	return 0;

 }

/*

integer overflow

the highest value we can store in an int is reached.

*/