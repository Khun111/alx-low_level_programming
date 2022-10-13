#include "variadic_functions.h"
/**
 * print_strings - print strings with separators
 * @separator: param
 * @n: param
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *x;
	va_list argslist;

	va_start(argslist, n);
	for (; i < n; i++)
	{
		x = va_arg(argslist, char *);
		if (x == NULL)
			x = "(nil)";
		printf("%s", x);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
