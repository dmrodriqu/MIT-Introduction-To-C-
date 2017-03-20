#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

double genRand(){

	srand(time(0));
	int randNum = rand();
	double div = (randNum % 100);
	return div/100;

}

int main(){

	double x = genRand();
	double y = genRand();
	return 0;
}
