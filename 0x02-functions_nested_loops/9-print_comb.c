#include <stdio.h>

/**
* main - Display all possible combinations of single digit number
*
* Return: 0 for success
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if ((i + '0') != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
