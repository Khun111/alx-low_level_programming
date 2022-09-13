#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	double f1 = 1;
	double f2 = 2;
	int i;

	printf("%f, %f, ", f1, f2);
	for (i = 3; i < 99; i++)
	{
		double next = f1 + f2;

		f1 = f2;
		f2 = next;
		printf("%.0f", next);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
