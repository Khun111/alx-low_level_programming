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
	for (i = 3; i < 51; i++)
	{
		long next = f1 + f2;

		f1 = f2;
		f2 = next;
		printf("%lu", next);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
}
