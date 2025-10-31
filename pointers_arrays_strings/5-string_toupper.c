#include "main.h"
/**
 * reverse_array - reverse my array 'a'
 * @a: pointer to my string 'a'
 * @n: number of elements to print
 * int start - set to '0'
 * int end - set to "n - 1"
 * int temp - set to array 'a'
 * Description: function that reverse an array
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