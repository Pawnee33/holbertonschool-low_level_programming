#include <stdio.h>
/**
 * main - My principal function
 * char - My variable 'ch' set to 'a'
 * char - My variable 'ch1' set to 'A'
 * while - loop runs while 'ch' is less than or equal to 'z'
 * putchar(ch) - print l'alphabet to 'a' to 'z'
 * while - loop runs while 'ch' is less than or equal to 'Z'
 * putchar(ch) - print l'alphabet to 'A' to 'Z'
 * putchar('\n') - print a newline
 * Return: 0*
*/
int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch1 = 'A';
	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}
	putchar('\n');
	return (0);
}
