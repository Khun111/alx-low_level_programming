#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	for (int first = 0; first <= 99; first++)
	{
		int a = (first / 10);
		int b = (first % 10);
		int sec = 1;

		while (sec < 100)
		{
			int c = (sec / 10);
			int d = (sec % 10);

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (first != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sec++;
		}
	}
	putchar('\n');
}
