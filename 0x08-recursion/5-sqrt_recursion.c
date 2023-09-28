#include <math.h>
#include <float.h>
/**
  * ion - a func to calculate the squar root of an int
  * _sqrt_recrution - a func to be called
  * @n : a param
  * @prev : an int param
  * Return: the sqrt of a number
  *
  */
int ion(int n, int prev)
{
	if (n == prev * prev)
		return (prev);
	else if (prev == n || prev == -n)
		return (-1);
	else
		return (ion(n, prev + 1));
}

/**
  * _sqrt_recursion - a func to be called
  * @n : a param
  *
  * Description: a func to output the sqrt of an int
  * Return: the result of ion
  */
int _sqrt_recursion(int n)
{
	return (ion(n, 0));
}
