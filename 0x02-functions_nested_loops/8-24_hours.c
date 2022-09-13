#include "main.h"
#include "_putchar.c"
/**
 * jack_bauer - 24jours
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int mins = 0;

		while (mins < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hours++;
	}
}
int main(void)
{
	jack_bauer();
}
