#include <stddef.h>

/**
* _strstr - function to locate substring
* @haystack:this is the string to search
* @needle: this is the substring to search for
* Return: pointer returned of located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
char *result = NULL;
char *h;
char *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *haystack == *n)
{
haystack++;
n++;
}

if (*n == '\0')
{
result = h;
break;
}

haystack = h + 1;
}

return (result);
}
