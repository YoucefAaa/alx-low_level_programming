#include "main.h"

/**
 * print_rev - a func to reverse a string
 * @s : a param
 *
 * Return: a 0
 */

void print_rev(char *s)
{
	int i, count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		_putchar(*(--s));
	_putchar('\n');
}
