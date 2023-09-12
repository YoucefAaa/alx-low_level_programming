#include "main.h"
/**
 * main - a func
 *
 * Description: a good alphabet printer
 * Return: a 0
*/


void print_alphabet(void)
{
	int i;
	char start = 'a';
	for (i = 0; i < 26; i++)
	{
		_putchar(start + i);
	}
	_putchar('\n');
}
