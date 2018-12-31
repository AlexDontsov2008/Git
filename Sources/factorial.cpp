#include "functions.h"

size_t factorial(size_t num) {
	return (num == 0) ? 1 : num * factorial(num - 1);
}