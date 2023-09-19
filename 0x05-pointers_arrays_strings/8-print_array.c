#include "main.h"
#include <stdio.h>
/**
  * print_array - a func
  * @a : a param
  * @n : a param
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n -1)
		{
			printf("%i", a[i]);
			continue;
		}
		printf("%i, ", a[i]);
	}
	putchar('\n');
}
