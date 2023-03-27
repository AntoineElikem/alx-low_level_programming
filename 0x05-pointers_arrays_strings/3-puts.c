#include "main.h"

/**
* _puts - prints a string and newline
* @str: char parameter
* Return: returnsvoid
**/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
