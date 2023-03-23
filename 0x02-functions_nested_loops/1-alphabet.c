#include "main.h"


/**
* print_alphabet - Display alphabets
*
* Return: 0 for success
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
