#include "function_pointers.h"
/**
 * print_name - call the function with a pointer
 * @name: param
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
