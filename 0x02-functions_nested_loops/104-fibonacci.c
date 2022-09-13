#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 * starting with 1 and 2
 * Return: Always o (Success)
 */
int main(void)
{
	unsigned long int f1, f2, f1d, f2d, f1m, f2m, overflow = 1000000000;
	int i;

	f1 = 1;
	f2 = 2;

	printf("%lu", f1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", f2);
		f2 += f1;
		f1 = f2 - f1;
	}

	f1d = f1 / overflow;
	f1m = f1 % overflow;
	f2d = f2 / overflow;
	f2m = f2 % overflow;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", f2d + (f2m / overflow));
		printf("%lu", f2m % overflow);
		f2d += f1d;
		f1d = f2d - f1d;
		f2m += f1m;
		f1m = f2m - f1m;
	}

	printf("\n");
	return (0);
}
