#include <stddef.h>

/**
* _strpbrk - function to search string for any of a set of bytes
* @s: string to search
* @accept: bytes to accept
* Return: pointer to byte in s that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
char *result = NULL;
char *a;

while (*s != '\0')
{
for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
result = s;
break;
}
}
if (result != NULL)
{
break;
}
s++;
}
return (result);
}
