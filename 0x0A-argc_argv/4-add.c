#include <stdio.h>
#include <stdlib.h>
/**
 * main - program name
 * @count: first
 * @value: second
 * Return: 0
 */
int main(int count, char **value)
{
	int i = 1, j, k = 0;

	for (; i < count; i++)
	{
		j = 0;
		for (; *(*(value + i) + j) != '\0'; j++)
		{
			if ((*(*(value + i) + j) < '0' || *(*(value + i) + j) > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(*(value + i));
	}
	printf("%i\n", k);
	return (0);
}
