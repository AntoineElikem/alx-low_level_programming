#include "main.h"

/**
* print_number - prints an integer
* @n: integer
* Return: void
*/

void print_number(int n)
{
int divisor = 1;
if (n < 0)
{
_putchar('-');
n *= -1;
}
while (n / divisor >= 10)
{
divisor *= 10;
}
while (divisor != 0)
{
_putchar('0' + n / divisor);
n %= divisor;
divisor /= 10;
}
}
