#include "main.h"
#include "_putchar.c"
/**
 * print_last_digit - helper
 * Return: 0
 * @a: parameter
 */
int print_last_digit(int a)
{
	if (a < 0)
		a = -a;
	return (a % 10);
}
