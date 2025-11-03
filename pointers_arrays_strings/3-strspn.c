#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: pointer to the string to search in
 * @c: Charcter to locate
 * for - loop through the string until ce reach the null terminator
 * if - check if the current character matches 'c'
 * , return pointer to the matching character
 * Return: NULL
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
    unsigned int j = 0;
    int found;

	for (i = 0; s[i] != '\0'; i++)
	{
        found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
            if (s[i] == accept[j])
            {
			found = 1;
            break;
		    }
        }
    if (!found)
    break;
	}
    return (i);
}
