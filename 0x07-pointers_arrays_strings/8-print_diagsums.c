#include <stdio.h>
/**
  * print_diagsums - a func
  * @a : an array
  * @size : a param
  */

void print_diagsums(int *a, int size)
{
	int i;
	long sum = 0;
	long som = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum += *(a + i * size + i);
		som += *(a + (i + 1) * size - 1 - i);
	}
	printf("%li, %li\n", sum, som);
}
