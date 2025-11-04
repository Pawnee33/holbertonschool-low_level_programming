#include "main.h"
/**
 * _strlen_recursion - print the lenght oh the string
 * @s: the string to be printed
 * if - Base case: if we reach the end of the string
 * Return: my character and the rest of the stinrg
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
