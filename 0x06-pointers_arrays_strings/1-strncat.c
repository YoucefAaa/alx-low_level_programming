#include "main.h"
#include <string.h>
/**
  * _strncat - a func
  * @dest : a param
  * @src : a 2nd param
  * @n : 3rd param
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
