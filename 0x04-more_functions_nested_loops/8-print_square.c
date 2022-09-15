#include "main.h"
/**
 * print_square - mario
 * @size: param
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
