#include "main.h"

/**
* reverse_array - reverse the content of an array of integers
* @a: array of integers
* @n: number of elements of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
int i = 0;
int temp = 0;

n = n - 1;
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
