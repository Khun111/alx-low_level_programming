#include <stdio.h>
/**
 * main - program name
 * @count: first
 * @name: second
 * Return: 0
 */
int main(int count __attribute__((unused)), char **name)
{
	printf("%s\n", *name);
	return (0);
}
