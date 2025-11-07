#include <stdio.h>
/**
* main - program that prints the sum of the
* even-valued terms
*
* Return: 0
*/
int main(void)
{
	int fibonacci1 = 1;
	int fibonacci2 = 2;
	int next;
	int sum = 2;

	while (fibonacci2 <= 4000000)
	{
		next = fibonacci1 + fibonacci2;

		if (next % 2 == 0)
		{
			sum += next;
		}

		fibonacci1 = fibonacci2;
		fibonacci2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
