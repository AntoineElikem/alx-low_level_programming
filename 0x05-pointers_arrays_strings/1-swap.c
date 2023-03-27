#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: integer point to first value
* @b: inteer pointer to second value
* Return: void
*/

void swap_int(int *a, int *b)
{
int swapBuffer = *a;
*a = *b;
*b = swapBuffer;
}
