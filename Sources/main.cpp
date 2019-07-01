#include "functions.h"

// This function print factorial of the passed num
void printFactorial(size_t num) {
	std::cout << "factorial(" << num << "): " << factorial(num) << std::endl;
}

int main(int argc, char* argv[]) {
	print("Learn make-files");
	printFactorial(5);
	printFactorial(6);
	printFactorial(7);
	printFactorial(8);
	printFactorial(9);
	print("Add new feature");
	std::cout << "5 + 6 = " << summ(5, 6) << std::endl;
	return 0;
}
