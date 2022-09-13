#include "main.h"
#include "_putchar.c"
/**
 * print_alphabet - lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 'a';
	while (i < '{')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
