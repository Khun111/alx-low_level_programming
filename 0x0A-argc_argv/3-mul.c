#include <stdio.h>
#include <stdlib.h>
int main(int count, char *value[])
{
	int result = 0, first, second;

	if (count != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(value[1]);
	second = atoi(value[2]);
	result = first * second;
	printf("%i\n", result);
	return (0);
}
