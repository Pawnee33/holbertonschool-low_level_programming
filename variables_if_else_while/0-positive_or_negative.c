#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative.\n", n);
		return (0);
	else if (n > 0)
		printf("%d is positive.\n", n);
		return (0);
	else (n == 0)
		prntf("%d 0 is zero.\n", n);
		return (0);
}
