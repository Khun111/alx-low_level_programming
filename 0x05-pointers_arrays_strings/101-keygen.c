#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random
 * Return: success
 */
int main(void)
{
	int i = 0, randgen, max = 2772;

	srand((int)(time(NULL)));
	for (i = 0; i < max; i++)
	{
		randgen = rand() % 126;
		printf("%c", randgen);
		max -= randgen;
	}
	printf("%c", max);
	return (0);
}
