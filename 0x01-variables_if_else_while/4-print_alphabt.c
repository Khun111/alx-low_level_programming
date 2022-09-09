#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 'a';

	while (a < 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
