#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Success
 */
int main(void)
{
	for (int a = '0'; a <= '7'; a++)
	{
		int b = '1';

		while (b <= '8')
		{
			int c = '2';

			while (c <= '9')
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
	}
	putchar('\n');
}
