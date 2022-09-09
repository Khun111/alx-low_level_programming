#include <stdio.h>
/**
 * main - Entry
 *
 * Return success
 */

int main(void)
{
	int a = '0';

	int b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
