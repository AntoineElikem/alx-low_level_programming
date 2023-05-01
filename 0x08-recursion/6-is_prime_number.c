#include <math.h>

/**
* is_prime_number - returns 1 if input integer is prime number, else 0
* @n: input integer
* Return: 1 if prime, else 0
*/

int is_prime_number(int n)
{
int i;
if (n <= 1)
{
return (0);
}
for (i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
