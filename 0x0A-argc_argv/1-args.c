#include <stdio.h>
int main(int count, char *name[] __attribute__((unused)))
{
	printf("%i\n", count - 1);
	return (0);
}
