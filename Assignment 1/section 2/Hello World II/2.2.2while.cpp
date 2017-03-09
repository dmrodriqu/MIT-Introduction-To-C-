#include <iostream>

using namespace std;
#define HELLO "Hello World!"
#define NEWLINE "\n"

int main(){
	int n;
	cin >> n;
	while(n > 0)
	{
		cout<<HELLO<<NEWLINE;
		n--;
	}
	return 0;
}