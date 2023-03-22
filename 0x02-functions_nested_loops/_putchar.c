#include <stdio.h>
#include <string.h>

/**
* _putchar - prints a character to the screen  
*
* Return: 0 for success
*/

int _putchar(char str[])
{
	int i = 0;

	while (i < (int)  strlen(str))
	{
		putchar(str[i]);
		i++;	
	}
	putchar('\n');
	return 0;
}
