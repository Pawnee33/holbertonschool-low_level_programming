#include <stdio.h>
/**
* main - Function that print its name
* @argc: number of command-line arguments
* @argv: array of command-line
* Return: 0
*/
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
