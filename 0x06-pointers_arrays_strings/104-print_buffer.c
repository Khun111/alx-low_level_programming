#include "main.h"
#include <stdio.h>
/**
 * print_buffer - complicated
 * @b: first
 * @size: second
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
		printf("\n");
	else
	{
		int i = 0, j, k;

		for (; i < size; i += 10)
		{
			printf("%.8x:", i);
				j = i;
			while (j < i + 10)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", b[j]);
				else
					printf("  ");
				j++;
			}
			printf(" ");
			k = i;
			while (k < i + 10)
			{
				if (k >= size)
					break;
				if ((b[k] > 126) || (b[k] < 32))
					printf("%c", '.');
				else
					printf("%c", b[k]);
				k++;
			}
		printf("\n");
		}
	}
}
