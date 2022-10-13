#include "variadic_functions.h"
/**
 * print_all - print args arcording to specifier
 * @format: format specifiers
 */
void print_all(const char * const format, ...)
{
	int j = 0, l = strlen(format) - 1;
	char *x;
	va_list args;

	va_start(args, format);
	while ((format != NULL) && (j <= l))
	{
		switch (format[j])
		{
			case 'c': printf("%c", va_arg(args, int));
					  separator(j, l);
					  break;
			case 'i': printf("%i", va_arg(args, int));
					  separator(j, l);
					  break;
			case 'f': printf("%f", va_arg(args, double));
					  separator(j, l);
					  break;
			case 's': x = va_arg(args, char *);
					  if(!x)
						  x = "(nil)";
					  printf("%s", x);
					  break;
		}
		j++;
	}
	putchar('\n');
	va_end(args);
}
/**
 * separator - put separator between args
 * @a: param
 * @b: param
 */
void separator(int a, int b)
{
	if (a != b)
		printf(", ");
}
