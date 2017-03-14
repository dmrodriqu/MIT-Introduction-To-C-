#include <iostream>

using namespace std;


void sum(const int a, const int b){
	int result = a+b;
	cout << result << endl;
}

/*
void sum(const double a, const double b){
	int result = a+b;
	cout << result << endl;
}
*/

int main(){
	int a; // double
	int b; // double
	cout << "Enter the First Integer" << endl;
	cin >> a;
	cout << "Enter the Second Integer" << endl;
	cin >> b;
	sum(a,b);
	return 0;
}

// 4.4.2

/*



*/