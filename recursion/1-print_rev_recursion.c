#include "main.h"
/**
 * _print_rev_recursion - print a string reverse
 * @s: the string to be printed
 * if - Base case: if we reach the end of the string
 * _putchar - print a new line
 *  _print_rev_recursion(s + 1) - recusive call for the rest of the string
 * _putchar(*s) - print the current character
 * Return: exit the function
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return;
}
