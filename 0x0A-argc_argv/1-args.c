#include <stdio.h>
/**
 * main - program name
 * @count: first
 * @name: second
 * Return: 0
 */
int main(int count, char **name __attribute__((unused)))
{
	printf("%i\n", count - 1);
	return (0);
}
