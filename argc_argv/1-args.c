#include <stdio.h>
/**
* main - Function that prints the number of arguments
* passed into it
* @argc: number of command-line arguments
* @argv: array of command-line
* Return: 0
*/
int main(int argc, char **argv)
{
	(void)argv;
	printf("argc - %d\n", argc);
	return (0);
}
