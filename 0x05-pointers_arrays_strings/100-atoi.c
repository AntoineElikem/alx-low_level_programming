#include "main.h"

/**
* _atoi - convert string to integer
* @s: pointer argument
* Return: int (converted string
*/

int _atoi(char *s)
{
int num = 0;
int sign = 1;
int i = 0;
while (*(s + i) != '\0')
{
/* Skip whitespace */
while (*(s + i) == ' ')
{
i++;
}
/* Check for a sign */
if (*(s + i) == '-')
{
sign = -1;
i++;
}
else if (*(s + i) == '+')
{
sign = 1;
i++;
}
/* Accumulate digits */
while (*(s + i) >= '0' && *(s + i) <= '9')
{
/* Check for overflow */
int maxdiv = INT_MAX / 10;
int maxmod = INT_MAX % 10;
if (num > maxdiv || (num == maxdiv && (*(s + i) - '0') > maxmod))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
num = num * 10 + (*(s + i) - '0');
i++;
}
/* Ignore any trailing non-numeric characters */
while (*(s + i) != '\0' && (*(s + i) < '0' || *(s + i) > '9'))
{
i++;
}
/* We've found the end of the number, so we can stop processing */
break;
}
return (num * sign);
}
