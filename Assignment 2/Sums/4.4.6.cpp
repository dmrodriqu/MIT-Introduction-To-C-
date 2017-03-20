#include <iostream>

using namespace std;

int sum(const int array[], const int length){
	int curval = 0;
	int sum = 0;
	// arr [1] to arr 2 to arr 3 sum next recurse
	for(int i = 0; i <= length ; curval = array[i++])
		sum += curval;
	return sum();

}

int main(){
	int i;
	cout << "How many numbers?" << endl;
	cin >> i;
	int array[i];
	for(int x = 0; x < i; x++){
		cout << "Enter number: " << x + 1 << endl;
		cin >> array[x];
	}
	cout << sum(array, i) << endl;

}