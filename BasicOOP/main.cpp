#include <iostream>
#include "Math.cpp"

int  main() {

	std::cout << "Testing...\n";
	int num = Math::integerMultiply(3, 5);
        std::cout << "THe product is: " << num << "\n"; 
	return 0;
}
