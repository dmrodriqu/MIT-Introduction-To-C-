#include <iostream>

void doubleNumber(int num) {
	num = num * 2;
	std::cout << num; // Should print 70 
}

int main() {
	int num = 35;
	doubleNumber(num);
	return 0;
}

