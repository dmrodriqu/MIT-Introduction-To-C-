#include <iostream>

using namespace std;
#define HELLO "Hello World!"
#define NEWLINE "\n"

int main(){
	int n;
	cin >> n;
	for(int i = 0; i< n; i++)
		cout<<HELLO<<NEWLINE;
	return 0;
}