#include <stdio.h>
/**
  * factorial - a func to calculate the factorial of n
  * @n : the number to calculat its factorial
  * Return: the factorial of an int
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
