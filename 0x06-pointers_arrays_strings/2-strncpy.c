#include "main.h"

/**
* _strncpy - copies string and returns a pointer
* @dest: destination of copied string
* @src: source to copy from
* @n: number of characters to copy
* Return: pointer to string location
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

/* loop to copy characters to begining of dest n times */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
	dest[i] = '\0';
return (dest);
}
