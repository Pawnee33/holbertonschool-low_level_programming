#include "main.h"
/**
 * *leet - Encodes a string into 1337
 * @str: String to encode
 * int *letters - set to "aAeEoOtTlL"
 * int *numbers - set to "4433007711"
 *
 * Description: function replace my characters "*letters"
 * in my string 'str' by my "*numbers".
 * Return: str
*/
char *leet(char *str)
{
	int i = 0;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
