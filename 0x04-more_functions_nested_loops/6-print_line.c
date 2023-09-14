#include "main.h"
/**
  * print_line - youa aer not suposed to be cheating
  * @n : the lenth of the line
  *
  *
  */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
