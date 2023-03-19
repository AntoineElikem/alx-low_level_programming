#include <stdio.h>

/**
* main - Display numbers from 0to9
*
* Return: 0 for success
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
