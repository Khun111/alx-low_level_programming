#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of main
 * @count: args number
 * @value: args
 * Return: 0 on success
 */
int main(int count, char **value)
{
	char *ref;
	int i = 0, num;

	if (count != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(value[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ref = (char *)main;
	for(; i < (num - 1); i++)
		printf("%.02x ", ref[i]);
	printf("%.02x", ref[i]);
	printf("\n");
	return (0);
}
