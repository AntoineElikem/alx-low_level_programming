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
	putchar('\n');
	return (0);
}
