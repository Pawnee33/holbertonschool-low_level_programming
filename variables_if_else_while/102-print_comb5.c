#include <stdio.h>
/**
* main - Function that prints all possible
* different combinations of two two digits
* int i - My first digit
* int j - My second digit
*
* Return: 0
*/
int main(void)
{
	int i = 0;
	int j = 0;
	int premier = 1;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			{
				if (!(premier))
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				premier = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
