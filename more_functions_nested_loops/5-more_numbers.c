#include "main.h"
/**
 * more_numbers - Function that prints numbers (0 to 9)
 * for - loop runs while 'i' is less to '10' up to '9'
 * for - loop runs while 'j' is less and equal to '14'
 * if - Check if 'j' is more and equal to '10'
 * _putchar(1) - Prints 0 to 9
 * _putchar('0' + (j % 10)) - Prints 10 to 14
 * _putchar('\n') - Print a newline
*/
void more_numbers(void)
{
    int i, j;

	for (i = 0; i < 10; i++)
    {
    
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
                _putchar('1');
			_putchar('0' + (j % 10));
        }
        _putchar('\n');
    }
}