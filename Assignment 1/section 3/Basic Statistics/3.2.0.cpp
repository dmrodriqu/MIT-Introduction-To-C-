#include <iostream>

using namespace std;

/*
Given a list of N integers, find its mean (as a double), 
maximum value, minimum value, and range. 

Your program will first ask for N, 
the number of integers in the list, 
which the user will input. 

Then the user will input N more numbers.
*/

int main(){
	// determine number of ints
	cout << "Determine number of ints\n";
	int n; // for average and median
	cin >> n;
	int sum = 0;
	int high;
	int low;
	int curVal;
	// first value set to compare
	cout << "Value " << 1 << ": " << "\n";
	cin >> curVal;
	high = curVal;
	low = curVal;
	sum = curVal;
	// second value and on
	for(int i=1; i<n; i++)
	{
		cout << "Value " << i+1 << ": " << "\n";
		cin >> curVal;
		if (curVal<low)
			low = curVal;
		else if (curVal > high)
			high = curVal;
		sum += curVal;

	}
	cout<< "Mean: " << (double)sum/n << "\n";
	cout<< "Max: " << high << "\n";
	cout<< "Min: " << low << "\n";
	cout<< "Range: " << high - low << "\n";
	return 0;
	
}