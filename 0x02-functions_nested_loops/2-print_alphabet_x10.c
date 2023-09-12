#include "main.h"
/**
 * main - a func
 *
 * Description: a good alphabet printer
 * Return: a 0
*/


void print_alphabet_x10(void)
{
	int i;
	int j;
	char start = 'a';

	for (j = 0 ; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(start + i);
		}
	
	_putchar('\n');

	}
}


