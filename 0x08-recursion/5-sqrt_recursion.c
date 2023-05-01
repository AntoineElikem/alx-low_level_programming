/**
* _sqrt_recursion - a recursive function returning square root of a number
* @n: input number square root of
* Return: natural square root of n
*/

int _sqrt_recursion(int n)
{
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
int sqrt = _sqrt_recursion(n / 2);
if (sqrt * sqrt == n)
{
return (sqrt);
}
else if (sqrt * sqrt < n)
{
return (sqrt + 1);
}
else
{
return (sqrt);
}
}
}
}
