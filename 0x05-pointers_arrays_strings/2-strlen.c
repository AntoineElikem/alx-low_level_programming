#include "main.h"

/**
* _strlen - returns length of given string
* @s: char param given as pointer
* Return: returns value of length
*/

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
