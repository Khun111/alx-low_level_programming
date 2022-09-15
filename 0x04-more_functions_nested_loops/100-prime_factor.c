#include <stdio.h>
long is_prime(long b);
/**
 * main - prime factors
 * Return: int
 */
int main(void)
{
	long b;
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
		if (num % i == 0)
			if (is_prime(i))
				b = i;
	printf("%lu", b);
	return (0);
}
/**
 * is_prime - prime number
 * Return: number
 * @b: param
 */
long is_prime(long b)
{
	long i;

	for (i = 2; i < b; i++)
		if (b % i == 0)
			return (0);
	return (1);
}
