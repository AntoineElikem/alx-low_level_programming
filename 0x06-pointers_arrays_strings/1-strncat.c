#include "main.h"

/**
* _strncat - returns pointer to value of concatenated string
* @dest: destination string argument as pointer
* @src: source argument as pointer
* @n: number of bytes to count from
* Return: pointer to destination string
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_length = 0, i;

while (dest[dest_length] != '\0')
{
dest_length++;
}
for (i = 0; i < n && src[i] != '\0'; i++, dest_length++)
{
dest[dest_length] = src[i];
}
dest[dest_length++] = '\0';
return (dest);
}
