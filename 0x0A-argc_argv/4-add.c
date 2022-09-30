#include <stdio.h>
#include <stdlib.h>
int main(int count, char *value[])
{
	int i = 1, j = 0, k = 0;

	for (; i < count; i++)
	{
		for (; value[i][j] != '\0'; j++)
		{
			if (!(value[i][j] >= '0' && value[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(value[i]);
	}
	printf("%i\n", k);
	return (0);
}
