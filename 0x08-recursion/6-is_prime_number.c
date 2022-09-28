#include "main.h"
/**
 * isPrime - check for prime
 * @n: param
 * @i: param
 * Return: 0/1
 */
int isPrime(int n, int i)
{
	if (n == 1)
		return (0);
	if (i != 1)
	{
		if (n % i != 0)
			return isPrime(n, i - 1);
		return (0);
	}
	return (1);
}
/**
 * is_prime_number - check for prime
 * @n: param
 * Return: 0/1
 */
int is_prime_number(int n)
{
	return (isPrime(n, n / 2));
}
