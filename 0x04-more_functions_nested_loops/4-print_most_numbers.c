#include "main.h"
/**
  * print_most_numbers - a func to print all the numbers from exept 4 and 2
  *
  */

void print_most_numbers(void)
{
	int i = 0;
	char j = '0';
	int k;

	while (i < 10)
	{
		k = j + i;

		if (k == '2' || k == '4')
		{
			i++;
			continue;
		}
		else
			_putchar(j + i);
		i++;
	}
	_putchar('\n');
}
