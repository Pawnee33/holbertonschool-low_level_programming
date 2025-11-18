#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - print a name
* @name: The name to be prints
* @f: My function pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;
	f(name);
}
