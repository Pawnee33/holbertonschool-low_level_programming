#include "function_pointers.h"

/**
* print_name - print a name
* @name: The name to be prints
* @f: My function pointer
* Description - Function that print a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
