#include <stdio.h>
#include "main.h"

/**
* print_array - print n elements of an array
* @a: pointer to the integer array
* @n: elements to print
* Return: void
*/

void print_array(int *a, int n)
{
int i;

/* print the first element of the array */
printf("%d", a[0]);

/* print the remaining elements of the array */
for (i = 1; i < n; i++)
{
printf(", %d", a[i]);
}
printf("\n");
}
