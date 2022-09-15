#include "main.h"
/**
 * print_int - output large numbers
 * @c: param
 */
void print_int(int c)
{
	if (c / 10)
		print_int(c / 10);
	_putchar('0' + c % 10);
}
/**
 * more_numbers - 0 to 9
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (j < 15)
		{
			print_int(j);
			j++;
		}
		_putchar('\n');
	}
}
