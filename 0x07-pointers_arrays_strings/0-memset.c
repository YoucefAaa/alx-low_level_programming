#include <string.h>
/**
  * _memset - a func
  * @s : a param
  * @b : to replace
  * @n : to count
  * Return: a string
  */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
