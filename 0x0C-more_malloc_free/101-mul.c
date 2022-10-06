#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int count, char **value)
{
	long num1 = atol(value[1]), num2 = atol(value[2]), i = 1, j;
	unsigned long mul; 
	if (count != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (; i < count; i++)
	{
		j = 0;
		for (; value[i][j]; j++)
		{
			if ((value[i][j] < '0' || value[i][j] > '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = num2 * num1;
	printf("%lu\n", mul);
}
