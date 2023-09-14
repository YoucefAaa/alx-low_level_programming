#include "main.h"
/**
  * _isdigit - a func to determine if c is a digit
  * @c : the char to check
  *
  * Return: 1 if c is a digit or a 0 if c is not a digiy
  */




int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

