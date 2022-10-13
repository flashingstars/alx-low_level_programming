#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: name to be printed
 * @f: pointer to function print_name
 */

void print_name(char *name, void (*f)(char *))
{
	_putchar(name);
}
