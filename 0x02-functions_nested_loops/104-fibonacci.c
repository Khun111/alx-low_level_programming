#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2, i;

	printf("%i, %i, ", f1, f2);
	for (i = 3; i < 99; i++)
	{
		double next = f1 + f2;

		f1 = f2;
		f2 = next;
		printf("%lf", next);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
