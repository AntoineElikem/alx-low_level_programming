#include <stdio.h>

/**
* _memcpy - copies into memory area
* @dest: destination memory to copy to
* @src: source memory to copy from
* @n: number of bytes to copy
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
size_t i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
