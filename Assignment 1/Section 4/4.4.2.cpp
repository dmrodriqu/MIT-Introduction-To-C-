/*
4.4.2

Run the program and enter −1. What happens? 
How can you change the code such that it won’t exhibit this behavior?

-1: 1

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
	else
	{
		cout << "The factorial of " << number << " is "; 
		int accumulator = 1;
		for(; number > 0; accumulator *= number--);
		cout << accumulator << ".\n";
	}
	return 0;

 }
