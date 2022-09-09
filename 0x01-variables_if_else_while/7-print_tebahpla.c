#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 'z';

	while (a > '`')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
