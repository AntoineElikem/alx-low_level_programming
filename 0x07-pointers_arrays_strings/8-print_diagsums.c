#include <stdio.h>
#include "main.h"

/**
* print_diagsums - function to print sum of two diagonals of a square matrix
* @a: points to elements of an array
* @size: size of the array
* Return: void
*/

void print_diagsums(int *a, int size)
{
int i = 0, j = 0, sum1 = 0, sum2 = 0;

while (i < size)
{
sum1 += a[(size + 1) * i];
i++;
}

while (j < size)
{
sum2 += a[(size - 1) * (j + 1)];
j++;
}

printf("%d, %d\n", sum1, sum2);
}
