/**
* _pow_recursion - a recursive function to return x to the power of y
* @x: input argument base number
* @y: input argument exponent
* Return: x to the power of y
*/

int _pow_recursion(int x, int y)
{
int result;

if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
result = x * _pow_recursion(x, y - 1);
return (result);
}
