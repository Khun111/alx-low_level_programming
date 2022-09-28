#include "main.h"
/**
 * _pow_recursion - power of y
 * @x: base
 * @y: power
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	else if (y != 0)
		res = x * _pow_recursion(x, y - 1);
	return (res);
}
