#include "main.h"
/**
  * print_last_digit - a func
  * @n : the char
  * Description: fg
  * Return: the last digit of a number
  */

int print_last_digit(int n)
{
	int y = n % 10;

	if (n < 0)
		n = -n;
	if (y < 0)
		y = -y;
	
	_putchar(y + '0');
	return (y);
}
