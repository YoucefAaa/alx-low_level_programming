#include "main.h"
/**
 * more_numbers - a func
 *
 */

void more_numbers(void)
{
	int i, j, k;
	char start = '0';
	char st = '0';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(start + j);
		}

		for (k = 0; k < 5; k++)
		{
			_putchar('1');
			_putchar(st + k);
		}

		_putchar('\n');
	}
}
