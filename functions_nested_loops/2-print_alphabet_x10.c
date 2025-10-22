#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 * char - My variable 'ch' set to 'a'
 * while - loop runs while 'ch' is less than or equal to 'z'
 * putchar(ch) - print l'alphabet to 'a' to 'z'
 * putchar('\n') - print a newline
 * Return: 0*
*/
void print_alphabet_x10(void);
{
	char ch;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		for (j = 0; j < 26; j++)
		{
			_putchar(ch++);
		}
		_putchar('\n');
	}
}
