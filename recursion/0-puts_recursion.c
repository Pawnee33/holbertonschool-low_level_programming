#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: the string to be printed
 * if - Base case: if we reach the end of the string
 * _putchar - print a new line
 * Return: exit the function
 * _putchar(*s) - print the current character
 * _puts_recursion(s + 1) - recusive call for the rest of the string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
