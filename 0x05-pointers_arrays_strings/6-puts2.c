#include "main.h"

/**
* puts2 - reverses the string given
* @str: pointer to string
* Return: void
*/

void puts2(char *str)
{
int len = 0;
int i;

while (*(str + len) != '\0')
{
len++;
}

for (i = 0; i < len; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
