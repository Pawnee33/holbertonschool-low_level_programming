#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers passed
 * , as command-line arguments
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1
 * , if any argument is not a valid number
 */
int main(int argc, char **argv)
{
    int i;
    int j;
    int product = 0;

	if (argc == 1)
    {
        printf("0\n");
        return (0);
    }
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }
    }
    for (i = 1; i < argc; i++)
    {
        product += atoi(argv[i]);
    }
    printf("%d\n", product);
    return (0);
}
