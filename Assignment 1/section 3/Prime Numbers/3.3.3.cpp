#include <iostream>

using namespace std;

int main(){
	// input for n
	int n;
	cin >> n;
	for(int i = 2; n > 0; i++) // anchor, decrement n
	{
		int prime = 1; // assumption that number to check is prime
		for(int x = 2; x<i; x++) // count to anchor
		{
			
			if(i % x == 0) // anything divisible up to anchor
			{
				prime =	0;	// if so break
				break;
			}
			n--;	   
		}
		if(prime)
			cout<< i << "\n";


	}
	return 0;
} 