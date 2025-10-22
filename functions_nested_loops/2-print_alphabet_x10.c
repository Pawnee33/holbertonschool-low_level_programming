#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Description: This function prints the alphabet (a to z) in lowercase
 * 10 times, each followed by a new line.
 *
 * Return: 0*
*/
void print_alphabet_x10(void)
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
