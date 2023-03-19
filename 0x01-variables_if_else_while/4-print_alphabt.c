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
		if (alphabet == 'e' || alphabet == 'p')
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
