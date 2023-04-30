/**
* _strchr - function to locate character in string
* @s: source string to search
* @c: character to search for
* Return: pointer to character or NULL if not found
*/

char *_strchr(char *s, char c)
{
char *result = NULL;

while (*s != '\0')
{

if (*s == c)
{
result = s;
break;
}
s++;
}
if (*s == c)
{
result = s;
}
return (result);
}
