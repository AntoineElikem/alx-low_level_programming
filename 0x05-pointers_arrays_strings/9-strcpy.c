#include "main.h"

/**
* _strcpy - returns a copy of given string
* @dest: points to destination pointer
* @src: points to src pointer
* Return: char (string copied)
*/

char *_strcpy(char *dest, char *src)
{
char *p = dest;

while (*src != '\0')
	*p++ = *src++;
*p = '\0';
return (dest);
}
