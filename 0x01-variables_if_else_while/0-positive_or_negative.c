#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * This is the main function description.
 *
 * Description: this is the main function
 * @return 0 if the program completes successfully.
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
return (0);
}
