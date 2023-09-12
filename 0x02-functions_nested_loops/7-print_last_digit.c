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

	if (n <= 9)
		return (n);
	else if (n <= 99)
		return (y);
	else
		return (n % 100);
}
