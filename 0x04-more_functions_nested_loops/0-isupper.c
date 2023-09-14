#include "main.h"
/**
  * _isupper - a func
  * @c : the char
  *
  * Description: a func to determine wethere c is uppercasr or lowercase
  * Return: a 1 if c is uppercase or c is lowercase
  */

int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	else
		return (0);
}

