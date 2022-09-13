#include "main.h"
/**
 * print_last_digit - helper
 * Return: 0
 * @a: parameter
 */
int print_last_digit(int a)
{
	if (a < 0)
		a = -a;
	_putchar(a % 10);
	return (a % 10);
}
