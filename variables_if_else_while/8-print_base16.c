#include <stdio.h>
/**
 * main - My pricipal function
 * int - My variable 'num' set to '0'
 * while - loop runs while 'num' is less than or equal to '15'
 * putchar(num) - print "0123456789abcdef"
 * putchar('\n') - print a newline
 * Return: 0
*/
int main(void)
{
	int i = 48;

	while (i  <= 57)
	{
		putchar(i);
		i++;
	}
	int i = 97

	while (i  <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
