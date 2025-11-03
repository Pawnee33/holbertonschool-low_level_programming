#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: pointer to the string to search in
 * @c: Charcter to locate
 * for - loop through the string until ce reach the null terminator
 * if - check if the current character matches 'c'
 * , return pointer to the matching character
 * if - check if the current character matches '\0'
 * , return pointer to the matching character
 * Return: NULL
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (c == '\0')
		{
			return (s + i);
		}
	}
	return (NULL);
}
