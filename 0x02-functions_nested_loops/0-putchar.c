#include "main.h"
#include "_putchar.c"
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char str_arr[] = "_putchar";
	int c = 0;

	while (str_arr[c] != '\0')
	{
		_putchar(str_arr[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
