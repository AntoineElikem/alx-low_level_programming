#include "main.h"

/**
* _isupper - checks if upper or lowercase
* @c: character to be checked
* Return: 0 for lower and 1 for upper
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
