#include "main.h"
/**
 * swap_int - swap int *a and *b
 * @a: pointer to an interger to update
 * @b: pointer to an interger to update
 * int paw - set to '*a'
 * Description: function that swaps the values of two integers
*/
void swap_int(int *a, int *b)
{
int paw = *a;
*a = *b;
*b = paw;
}
