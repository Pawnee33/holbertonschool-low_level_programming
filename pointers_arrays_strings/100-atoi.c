#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * int i - set to '0'
 * int sign - set to '1'
 * int result - set to '0'
 * while - handle signs before the number
 * while - read digits and build the result
 * Return: return the final result with the correct sign
*/
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0;

    /* loop through each character */
    while (s[i])
    {
        if (s[i] == '-')
            sign = -sign;      /* flip sign for each '-' */
        else if (s[i] >= '0' && s[i] <= '9') /* start number */
        {
            while (s[i] >= '0' && s[i] <= '9') /* read digits */
            {
                result = result * 10 + (s[i] - '0');
                i++;
            }
            break; /* stop after number */
        }
        i++;
    }

    return result * sign;
}
