#include "main.h"
/**
* main - prints that multiplies two numbers
* @argc: number of command-line arguments
* @argv: array of command-line
* Return: 0
*/
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("Result = %d\n", sum);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

}
