#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: string
* Return: string
*/

char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{

if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
|| s[i] == ',' || s[i] == ';' || s[i] == '.'
|| s[i] == '!' || s[i] == '?' || s[i] == '"'
|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
