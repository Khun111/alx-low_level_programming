#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonals
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, right = 0, left = 0;

	for (i = 0; i < size; i++)
	{
		right += (*(a + ((size + 1) * i)));
		left += (*(a + ((size - 1) * (i + 1))));
	}
	printf("%i, %i\n", right, left);
}
