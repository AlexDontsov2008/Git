#include "functions.h"

void printFactorial(size_t num) {
	std::cout << "factorial(" << num << "): " << factorial(num) << std::endl;
}

int main(int argc, char* argv[]) {
	print("Learn make-files");
	printFactorial(5);
	printFactorial(6);
	printFactorial(7);
	return 0;
}
