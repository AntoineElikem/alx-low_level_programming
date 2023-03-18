#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* short description here */

/**
 * This is the main function description
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
} 
else if (n < 0)
{
	printf("%d is negative\n", n);
} 
else
{
	printf("%d is zero\n", n);
}
/* returning success */
return (0);
}
