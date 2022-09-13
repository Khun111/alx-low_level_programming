#include "main.h"
#include "_putchar.c"
/**
 * times_table - helper
 * Return: 0
 */
void times_table(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j < 10)
		{
			int multi = i * j;
			if (j == 0)
			{
				_putchar(multi + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if(multi < 10)
			{
				_putchar(' ');
				_putchar(multi + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
