#include "variadic_functions.h"
/**
 * print_numbers - print numbers with separators
 * @separator: param
 * @n: param
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, x;
	va_list args;

	va_start(args, n);
	for (; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%i", x);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
