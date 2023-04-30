/**
* _strlen_recursion - a recursive function to return the length of a string
* @s: input string to return length of
* Return: length of string
*/

int _strlen_recursion(char *s)
{
int result;

if (*s == '\0')
{
return (0);
}
result = 1 + _strlen_recursion(s + 1);
return (result);
}
