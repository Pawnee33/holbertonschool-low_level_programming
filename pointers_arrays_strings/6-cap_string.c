#include "main.h"
/**
 * *cap_string - Capitalizes the first letter of each words of a string
 * @str: String to modify
 * int new_world - the next character could start a new word
 *
 * Description: function scans through the string 'str'
 * and capitalizes the first character of each word.
 * Return: A pointer to the modified string `str`.
*/
char *cap_string(char *str)
{
	int i;
	int new_world = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_world && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new_world = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_world = 1;
		}
		else
		{
			new_world = 0;
		}
	}
	return (str);
}
