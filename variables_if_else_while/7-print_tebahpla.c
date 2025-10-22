#include <stdio.h>
/**
 * main - My principal function
 * char - My variable 'ch' set to 'z'
 * while - loop runs while 'ch' is less than or equal to 'a'
 * putchar(ch) - print l'alphabet in reverse to 'z' to 'a'
 * putchar('\n') - print a newline
 * Return: 0*
*/
int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
