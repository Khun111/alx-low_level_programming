#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	int a = n % 10;

	if (a == 0)
		printf("Last digit of %i is %i and is zero", n, a);
	else if (a > 5)
		printf("Last digit of %i is %i and is greater than 5", n, a);
	else
	printf("Last digit of %i is %i and is less than 6 and not 0", n, a);
	return (0);
}
