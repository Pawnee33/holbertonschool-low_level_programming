#include <stdio.h>
/**
* main - Function that prints all possible
* different combinations of two digits
* int i - My first digit
* int j - My second digit
* int k - My third digit
*
* Return: 0
*/
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (!(i == 0 && j == 1 && k == 2))
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
			}
		}
	}
	putchar('\n');
	return (0);
}
