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
	int change = 0, i;
	int j = 0, arr[] = {25, 10, 5, 2, 1};

	if (count != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(*(value + 1));
	for (; j < 5; j++)
	{
		while (i >= arr[j])
		{
			i -= arr[j];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
