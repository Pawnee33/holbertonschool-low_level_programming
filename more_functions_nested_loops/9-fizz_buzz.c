#include <stdio.h>
/**
 * main - Prints the numbers from '1' to '100'
 * @i: set to '0'
 * for - Prints the numbers from '1' to '100'
 * if - Prints "FizzBuzz" for multiples of both 3 and 5
 * else if - Prints "Fizz" for multiples of 3
 * else if - Prints "Buzz" for multiples of 5
 * else - Prints the numbers if 'i' isn't divisible by either 3 or 5
 * Return: 0
*/
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
