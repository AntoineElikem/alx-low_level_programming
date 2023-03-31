#include "main.h"

/**
* _strcat - function to concatenate two strings
* @dest: destination pointer argument
* @src: source char pointer argument
* Return: pointer to the destination string
*/

char *_strcat(char *dest, char *src)
{
int string_length, i;

string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (i = 0; src[i] != '\0'; i++, string_length++)
{
dest[string_length] = src[i];
}
dest[string_length] = '\0';
return (dest);
}
