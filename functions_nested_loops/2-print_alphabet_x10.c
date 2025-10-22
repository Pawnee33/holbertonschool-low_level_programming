#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase 10 times
 * char - My variable 'ch'
 * for - This function displays the sequence of letters 10 times
 * for - run the 26 letters of the alphabet
 * putchar(ch++) - print the current letter 'ch' then increment 'ch'
 * putchar('\n') - print a newline
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
