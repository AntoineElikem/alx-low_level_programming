/**
* _sqrt_recursion - a recursive function returning square root of a number
* @n: input number square root of
* Return: natural square root of n
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
int low = 0;
int high = n;
int mid = (low + high) / 2;
while (low <= high)
{
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
mid = (low + high) / 2;
}
return (-1);
}
}
