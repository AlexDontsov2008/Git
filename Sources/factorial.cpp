#include <functions.h>

constexpr size_t factorial(constexpr size_t num) {
	return (num == 0) ? 1 : num * factorial(num - 1);
}