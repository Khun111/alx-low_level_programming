#include <stdio.h>
int main(int count __attribute__((unused)), char *name[])
{
	printf("%s\n", *name);
	return (0);
}
