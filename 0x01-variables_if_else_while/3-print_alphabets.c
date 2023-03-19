#include <stdio.h>

/**
* main - Displays lowercase alphabet with putchar
*
* Return: 0 for success
*/

int main(void)
{
	int alphabet;
	int capital;

	alphabet = 'a';
	capital = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
