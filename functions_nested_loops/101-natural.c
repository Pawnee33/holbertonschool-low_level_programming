#include <stdio.h>
/**
* main - program that computes and prints the sum of
* all the multiples of '3' or '5' below '1024'
*
* Return: 0
*/
int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
