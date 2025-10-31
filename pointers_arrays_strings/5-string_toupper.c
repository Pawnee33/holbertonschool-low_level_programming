#include "main.h"
/**
 * *string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Description: This function scans through the string `str` and converts
 * every lowercase letter ('a' to 'z') into its corresponding uppercase
 * letter ('A' to 'Z'). It does so by subtracting 32 from the ASCII value
 * of each lowercase letter, which works because of the way ASCII is ordered.
 *
 * Return: A pointer to the modified string `str`.
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
