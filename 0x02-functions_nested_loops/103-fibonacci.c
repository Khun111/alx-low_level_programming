#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int f1 = 0;
	int f2 = 1;
	long track = 0;

	while (f2 < 4000000)
	{

		long next = f1 + f2;

		f1 = f2;
		f2 = next;
		if (next % 2 == 0)
			track += next;
	}
	printf("%lu\n", track);
	return (0);
}
