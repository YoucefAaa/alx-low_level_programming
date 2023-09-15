#include "main.h"
/**
 * print_number - a func
 * @n: the char
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');
}
