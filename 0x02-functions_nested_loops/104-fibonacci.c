#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	long double f1 = 1;
	long double f2 = 2;
	int i;

	printf("%.0Lf, %.0Lf, ", f1, f2);
	for (i = 3; i < 99; i++)
	{
		long double next = f1 + f2;

		f1 = f2;
		f2 = next;
		printf("%.0Lf", next);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
