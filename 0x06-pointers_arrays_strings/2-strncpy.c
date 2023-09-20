#include "main.h"
#include <string.h>
/**
  * _strncpy - a func
  * @dest : as param
  * @src : a 2nde param
  * @n : a third param
  * Return: a dest array
  */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
