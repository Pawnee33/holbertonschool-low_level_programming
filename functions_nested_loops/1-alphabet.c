#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 * char - My variable 'ch' set to 'a'
 * while - loop runs while 'ch' is less than or equal to 'z'
 * putchar(ch) - print l'alphabet to 'a' to 'z'
 * putchar('\n') - print a newline
 * Return: 0*
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
