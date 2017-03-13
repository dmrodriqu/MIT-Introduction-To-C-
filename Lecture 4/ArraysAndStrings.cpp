#include <iostream>

using namespace std;

/*

Array
storing multiple values together as a unit

A fixed number of elements of the same type stored
sequentially in memory

size of the array is referred to as dimension

to declare:
	type arrayName[dimension];


Accessing elements of an array
	The index:
		- 0 indexed
		- arr[i]
	elements of an array must be initialized

	We can initialize some, or all


*/

//example

int exampleArray(){
	int arr[4];

	arr[0] = 6;
	arr[1] = 0;
	arr[2] = 9;
	arr[3] = 6;

	return arr[0];
}

// we can also initialize all at once, or let the compiler
// determine the size of the array for us

//example

int secondExampleArray(){

	int arr[] = {6,0,9,6,2,2,0,1,1};

	return arr[3];
}

/*

	Arrays can also be initialized with vals that are
	not known beforehand

*/

int main(){
	int arr[4];
	cout<< "please enter 4 ints:" << endl;
	for(int i = 0; i<4; i++)
		cin>>arr[i]

	cout<< "values in array are now" <<;
	for(int i =0; i<4; i++)
		cout<< " "<<arr[i];
	cout<< endl;
	return 0;
}

/*

Arrays can be passed as arguments to functions
	pass without a parameter

*/

int sum(const int array[], cont int length){
	long sum = 0;
	for(int i = 0; i < length; sum += array[i++]);
	return sum;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7}
	cout << "Sum:" << sum(arr, 7) << endl;
	return 0;
}

/*

C++ supports multidimensional arrays!

	type arrayName[d1][d2];
	when declaring dimensions must be provided

	when declaring functions, first dimension is optional

	all elements are held in memory sequentially
	so the compiler must determine how to parse

*/

// ~~~~~~~~~~~ STRINGS ~~~~~~~~~~~~~


/*

string literals
	represented by C++ as a sequence of characters in memory
	it is a character array

*/

int main(){

	char helloworld[]{ 'H', 'e', 'l', 'l', 'o', ',',
					   'w', 'o', 'r', 'l', 'd', '!', '\0'}; //null character
	cout << helloworld << endl
	return 0;

}

/*

Character arrays can also be init using string literals
no null character is needed, compiler inserts one

char helloworld[] = "Hello, world!"

there are several character libraries:

<cctype> (ctype.h) - character handling
<cstio>  (stdio.h) - input/output operations
<cstdlib> (stdlib.h) - general utilities
<cstring> (string.h) - string manipulation

*/

// cctype library example

#include <iostream>
#include <cctype>
using namespace std;

int main(){

	char messyString[] = "t6H0I9s6.iS.999a9.STRING"; //unformatted string
	char current = messyString[0]; //starts at array index 0
	for(int i = 0; current != '\0'; current=messyString[++i]){ // increments i, and sets current
		if(isalpha(current)) //checks if current char is alpha
			cout<< (char)(isupper(current) ? tolower(current) : current); //if alpha -> if upper then changes to lower else current
		else if (ispunct(current)) //if punct, then space
			cout << ' ';
	}
	cout << endl;
	return 0;
}



