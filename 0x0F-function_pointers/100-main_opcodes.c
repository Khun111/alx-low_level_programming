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
	char *ref = (char *)main;
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
	for (; i < (num - 1); i++)
		printf("%02x ", (unsigned char)ref[i]);
	printf("%02x\n", (unsigned char)ref[i]);
	return (0);
}
