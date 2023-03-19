#include <stdio.h>

/**
* main - Displays lowercase alphabet with putchar in reverse
*
* Return: 0 for success
*/

int main(void)
{
	int alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
