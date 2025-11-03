#include "main.h"
/**
 * *_strstr - Function that locates a substring
 * @haystack: pointer to the string to search in
 * @needle: substring to locate
 * Return: NULL
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
