#include "main.h"

/**
* puts_half - prints the other half of a string
* @str: pointer to the given string
* Return: void
*/

void puts_half(char *str)
{
int len = 0;
int i;
int start_index;

/* Get length of the string */
while (*(str + len) != '\0')
{
len++;
}
/* get starting index to print second half */
start_index = len / 2;
if (len % 2 == 1)
{
start_index += 1;
}
/* print the second half of the string */
for (i = start_index; i < len; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
