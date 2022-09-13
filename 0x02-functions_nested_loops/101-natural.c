#include "main.h"
#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int total = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			total += i;
		i++;
	}
	printf("%i\n", total);
}
