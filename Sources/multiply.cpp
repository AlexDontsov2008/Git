#include "functions.h"

size_t multiply(size_t a, size_t b)
{
	size_t result {};
	for (size_t i = 0; i < b; ++i)
	{
		result = summ(result, a);
	}
	return result;
}

size_t divide(size_t a, size_t b)
{
	if (b == 0)
		return -1;

	return a / b;
}