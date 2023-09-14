#include "main.h"
/**
  * print_square - a func
  * @size : the size of the square
  *
  */

void print_square(int size)
{
	if (size > 0)
	{
		int i = size;
		int j;

		while (i > 0)
		{
			j = size;
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			i--;
			if (i > 0)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
