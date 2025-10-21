#include <stdio.h>
/**
 * main - My principal function
 * char - My variable 'ch' set to 'a'
 * while - loop runs while 'ch' is less than or equal to 'z'
 * if - Condition who exclude 'q' and 'e'
 * putchar(ch) - print l'alphabet to 'a' to 'z' without 'q' and 'e'
 * putchar('\n') - print a newline
 * Return: 0*
*/
int main(void)
{
	char ch = 'a';
	
	
	while (ch <= 'z')
	{
		{
			if (ch != 'q' && ch != 'e')
		putchar(ch);
		ch++;
		}
	}
	putchar('\n');
	return (0);
}
