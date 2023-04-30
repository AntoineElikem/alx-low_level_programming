/**
* _strchr - locates a character in a string
* @s: string that will be searched
* @c: character to search for
* Return: pointer fifo character found or NULL if not found
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
