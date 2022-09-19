#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random
 * Return: success
 */
int main(void)
{
	int i = 0, random, max = 2722;

	srand((unsigned int)(time(NULL)));
	if (i >= 2645)
	{
		for (i = 0; i < max; i++)
		{
			random = rand() % 126;
			i += random;
				printf("%c", i);
		}
	}
	printf("\n");
	return (0);
}
