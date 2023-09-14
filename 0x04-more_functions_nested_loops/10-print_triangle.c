#include "main.h"
/**
  * print_triangle - a func
  * @size : char
  *
  */

void print_triangle(int size)
{
	int i, j, k, l;

	if (size <= 0)
		_putchar('\n');
	for (i = 0 ; i < size ;i++)
	{
		j = size - i - 2;
		l = 1 + i;
		while (j >= 0)
		{
			_putchar(' ');
			j--;
		}
		k = 1;
		while (k <= l)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
	}
}

