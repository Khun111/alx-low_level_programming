#include "3-calc.h"
/**
 * main - calculate
 * @count: number of args
 * @value: arg
 * Return: result
 */
int main(int count, char **value)
{
	char *arith;
	int num1, num2, result;

	if (count != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num2 = atoi(value[3]);
	num1 = atoi(value[1]);
	arith = value[2];
	if (get_op_func(arith) == NULL || arith[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (*arith == '/' || *arith == '%')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	result = get_op_func(arith)(num1, num2);
	printf("%i\n", result);
	return (0);
}
