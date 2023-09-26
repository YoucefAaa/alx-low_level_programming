#include "main.h"
/**
  * print_diagsums - a func
  * @a : an array
  * @size : a param
  */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, som = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum += a[i][i];
		som += a[i][size - 1 - i];
	}
	printf("%i, %i", sum, som);
}
