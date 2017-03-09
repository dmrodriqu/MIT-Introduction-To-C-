#include <iostream>

using namespace std;
#define HELLO "Hello World!"
#define NEWLINE "\n"

int main(){
	int n;
	cin >> n;
	do
	{
		cout<<HELLO<<NEWLINE;
		n--;
	}
	while(n > 0);
	return 0;
}