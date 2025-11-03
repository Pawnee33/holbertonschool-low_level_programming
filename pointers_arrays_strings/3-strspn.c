#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string contaning accepting characters
 * for - loop through the string until ce reach the null terminator
 * for - Check if 's[i] is in 'accept'
 * Return: number of bytes in the initialsegment of 's'
 * , which consist only of bytes from 'accept'
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
