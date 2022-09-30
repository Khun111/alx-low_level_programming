#include <stdio.h>
/**
 * main - program name
 * @count: first
 * @name: second
 * Return: 0
 */
int main(int count, char **name)
{
	int k = 0;

	for (; k < count; k++)
		printf("%s\n", *(name + k));
	return (0);
}
