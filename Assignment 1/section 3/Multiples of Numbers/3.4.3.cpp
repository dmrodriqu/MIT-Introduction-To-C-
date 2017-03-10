/*

3.4.3 
continue

Modify the code from 3.4.1 so that if the condition fails, 
nothing is printed. 

Use an if and a continue command (instead of the ternary operator) 
to accomplish this.

*/

#include <iostream>

using namespace std;

int main(){

	while(true){
		int N;
		cin >> N;
		if (N > 0 && N % 5 == 0)
		{
			cout << N/5 << "\n";
		}
		else if (N < 0)
		{
			cout << "Goodbye!" << "\n";
			break;
		}
		else
		{
			continue;
		}
	}

}