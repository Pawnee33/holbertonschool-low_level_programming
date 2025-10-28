#include "main.h"
/**
 * reset_to_98 - updates the value of an integer to '98'
 * @a: pointer to an interger to update
 * @b: pointer to an interger to update
 * int paw - set to '*a'
 * Description: This function takes a pointer to an int as a parameter
 * and changes the value of the integer it points to to 98.
*/
void swap_int(int *a, int *b)
{
int paw = *a;
*a = *b;
*b = paw;
}
