/*
4.4.5

Since we know that only a small number of inputs produce valid outputs, 
we can alterna­ tively hardcode the factorials of these inputs. 
Rewrite the program from the previous part (“Rewriting Factorial”) 
using a switch statement to demonstrate for inputs up to 10 how you would do this. 
(Of course, the code for inputs above 10 would basically be the same, 
but you do not need to go through the work of finding all those large factorials.)

*/

#include <iostream> 

using namespace std;

int main(){

	short number;
	cout << "Enter a number: "; 
	cin >> number;
	switch(number)
	{
		case 1:
			cout<< 1 << "\n";
			break;
		case 2:
			cout<< 2 << "\n";
			break;
		case 3:
			cout<< 6 << "\n";
			break;
		case 4:
			cout<< 24 << "\n";
			break;
		case 5:
			cout<< 120 << "\n";
			break;
		case 6:
			cout<< 720 << "\n";
			break;
		case 7:
			cout<< 5040 << "\n";
			break;
		case 8:
			cout<< 40320 << "\n";
			break;
		case 9:
			cout<< 362880 << "\n";
			break;
		case 10:
			cout<< 3628800 << "\n";
			break;
		default:
			cout << "non default-value entered" << "\n";
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
	}
	return 0;

 }

/*

integer overflow

the highest value we can store in an int is reached.

*/


 /*

4.4.6

characters are not considered int, and will be == 0
decimals are rounded down (short)

large numbers are overflow
negative numbers cause a break

no other cases.

 */