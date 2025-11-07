#include <stdio.h>
/**
* main - program that prints the first 98 Fibonacci
* numbers
*
* Return: 0
*/
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1;
	unsigned long nacci1 = 0, nacci2 = 2;
	unsigned long low, high;
	int i = 0;

	printf("1, 2");

	for (i = 3; i <= 98; i++)
	{
		low = fibo2 + nacci2;
		high = fibo1 + nacci1;
		if (low >= 1000000000)
		{
			low -= 1000000000;
			high += 1;
		}
		if (high > 0)
		{
			printf(", %lu%09lu", high, low);
		}
		else
		{
			printf(", %lu", low);
		}
		fibo1 = nacci1;
		fibo2 = nacci2;
		nacci1 = high;
		nacci2 = low;
	}
	printf("\n");
	return (0);
}
