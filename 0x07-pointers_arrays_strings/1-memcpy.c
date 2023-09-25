#include <string.h>
/**
  * _memcpy - a func
  * @n : a param
  * @dest : a param
  * @src : a param
  * Return: a string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
