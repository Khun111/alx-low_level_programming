#include "main.h"
/**
 * print_last_digit - helper
 * Return: 0
 * @a: parameter
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
		a = -a;
	_putchar(a);
	return (a);
}
