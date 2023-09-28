#include <math.h>
#include <stdio.h>
/**
  * _pow_recursion - a func to powr x to y
  * @x : a pnumber to be powred to y
  * @y : the number to power x by
  * Return: the power of x to y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
