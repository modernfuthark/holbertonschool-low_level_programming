#include "function_pointers.h"
/**
 * print_name - Print name using an external function
 * @name: Name to print
 * @f: External function
 * Return: Nothing, function is void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
