#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

double genRandX(){

	int randNum = rand();
	double div = (randNum % 100);
	return div/100;

}

double genRandY(){

	int randNum = rand();
	double div = (randNum % 100);
	return div/100;

}

bool insideCirlce(double x, double y){

	if (1 > sqrt(pow(x,2) + pow(y,2)))
		return true;
	else 
		return false;

}


float calculatePi(int n){

	double counter = 0;
	/// REMEMBER TO CALL SRAND ONLY ONCE!!!
	for(int i = 0; i < n; ++i)
	{
		double x = genRandX();
		double y = genRandY();
		if(insideCirlce(x, y))
			counter++;
		i++;

	}
	  float prePi =  counter/n;
	  float pi = 8*prePi;
	  return pi;
} 


int main(){
	srand(time(0));
	int n;
	cout << "number of darts"<<endl;
	cin >> n;
	cout << calculatePi(n)<<endl;
	return 0;
}
