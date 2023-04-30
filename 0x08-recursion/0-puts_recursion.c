#include "main.h"

/**
* _puts_recursion - a recursive function to print a string and newline
* @s: input string to print
* Return: void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
