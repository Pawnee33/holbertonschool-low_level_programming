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
	int i;

	for (i = 47; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 96; i < 103)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
