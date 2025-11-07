#include <stdio.h>
/**
* main - program that prints the first 50 Fibonnacci numbers
*
* Return: 0
*/
int main(void)
{
	int fibonacci1 = 1;
	int fibonacci2 = 2;
	int i = 0;
	int next;

	printf("%d, %d", fibonacci1, fibonacci2);

	for (i = 3; i <= 50; i++)
	{
		next = fibonacci1 + fibonacci2;
		printf(", %d", next);
		fibonacci1 = fibonacci2;
		fibonacci2 = next;
	}
	printf("\n");
	return (0);
}
