#include "main.h"
#include "_putchar.c"
/**
 * print_alphabet_x10 - continue
 * Return: no
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 'a';

		while (j < '{')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
