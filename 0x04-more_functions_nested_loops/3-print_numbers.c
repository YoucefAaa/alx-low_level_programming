#include "main.h"
/**
  * print_numbers - a func to print all numbers from 0 to 9
  *
  * Return: all numbers from 1 to 9
  */

void print_numbers(void)
{
	int i = 0;
	char j = '0';

	while (i < 10)
	{
		_putchar(j + i);
		i++;
	}
	_putchar('\n');
}
