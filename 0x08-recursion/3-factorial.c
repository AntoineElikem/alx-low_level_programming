/**
* factorial - a function that returns the factorial
* @n: input number to return factorial of
* Return: int factorial of n
*/

int factorial(int n)
{
int result;

if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
result = n * factorial(n - 1);
return (result);
}
