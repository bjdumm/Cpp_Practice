#include <iostream>
using namespace std;

int numbers[] = {1 , 2, 3, 5, 8, 13, 21};
int n, result = 0;

int main() {

	for (n=0; n<sizeof(numbers) / sizeof(int); ++n) {
	    result += numbers[n];
	}
	cout << result << "\n";
	return 0;
}
