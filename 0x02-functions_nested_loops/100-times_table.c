#include "main.h"
/**
 * print_int - helper
 * @i: param
 * Return: 0
 */
void print_int(int i)
{
	if (i / 10)
		print_int(i / 10);
	_putchar('0' + (i % 10));
}
/**
 * print_times_table - helper
 * @n: param
 * Return: 0
 */
void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int multi = i * j;

				if (multi < 10)
				{
					if (j == 0)
						print_int(multi);
					_putchar(' ');
					_putchar(' ');
					print_int(multi);
				}
				else if (multi < 100)
				{
					_putchar(' ');
					print_int(multi);
				}
				else
					print_int(multi);
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
