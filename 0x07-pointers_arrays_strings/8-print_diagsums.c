#include <stdio.h>
/**
  * print_diagsums - a func
  * @a : an array
  * @size : a param
  */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int som = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum += a[i * size + 1];
		som += a[(i + 1) * size - 1 - i];
	}
	printf("%i, %i\n", sum, som);
}
