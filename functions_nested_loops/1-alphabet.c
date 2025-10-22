#include "main.h"
/**
 * main - My principal function
 * char - My variable 'ch' set to 'a'
 * while - loop runs while 'ch' is less than or equal to 'z'
 * putchar(ch) - print l'alphabet to 'a' to 'z'
 * putchar('\n') - print a newline
 * Return: 0*
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
