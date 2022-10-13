#include "variadic_functions.h"
/**
 * sum_them_all - add variable number of args
 * @n: number of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list args;

	va_start(args, n);
	for (; i < n; i++)
		sum += va_arg(args, int);
	return (sum);
	va_end(args);
}
