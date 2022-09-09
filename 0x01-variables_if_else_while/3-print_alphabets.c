#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 'a';
	int b = 'A';

	while (a < '{')
	{
		putchar(a);
		a++;
	}
	while (b < '[')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
