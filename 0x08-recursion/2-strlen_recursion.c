#include <string.h>
#include <stdio.h>
/**
  * _strlen_recursion - a func
  * @s : a param
  * Return: a 0
  */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
