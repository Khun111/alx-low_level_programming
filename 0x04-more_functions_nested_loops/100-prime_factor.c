#include <stdio.h>
int is_prime(long b)
{
	long i;

	for (i = 2; i < b; i++)
	{
		if (b % i == 0)
			return 0;
	}
		return 1;
}
int main(void)
{
	long b;
	long i;

	for (i = 2; i < 852475143; i++)
	{
		if (852475143 % i == 0)
			if (is_prime(i))
				b = i;
	}
	printf("%lu", b);
}
