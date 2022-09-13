#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	int i;

	printf("%lu, %lu, ", f1, f2);
	for (i = 3; i < 51; i++)
	{
		long int next = f1 + f2;

		f1 = f2;
		f2 = next;
		printf("%lu", next);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
