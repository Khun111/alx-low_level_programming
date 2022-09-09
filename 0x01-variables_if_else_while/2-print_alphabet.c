#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 'a';

	while (a < '{')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
}
