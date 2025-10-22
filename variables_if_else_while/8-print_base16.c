#include <stdio.h>
/**
 * main - My pricipal function
 * int - My variable 'i'
 * for - loop runs while 'i' is less than  to '58' up to '9' (ASCII 57)
 * for - loop runs while 'i' is less than  to '103'up to 'f' (ASCII 102)
 * putchar(num) - print "0123456789abcdef"
 * putchar('\n') - print a newline
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
