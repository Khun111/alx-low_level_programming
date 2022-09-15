#include "main.h"
/**
 * print_int - large ints
 * @n: para
 */
void print_int(unsigned int n)
{
	if (n / 10)
		print_int(n / 10);
	_putchar('0' + n % 10);
}
/**
 * print_number - large ints
 * @n: para
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_int(n);
}
