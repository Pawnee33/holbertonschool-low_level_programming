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
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
