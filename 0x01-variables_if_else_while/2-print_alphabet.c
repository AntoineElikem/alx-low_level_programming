#include <stdio.h>

/**
* main - Displays lowercase alphabet with putchar
*
* Return: 0 for success
*/

int main(void)
{
	int alphabet;
	
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
