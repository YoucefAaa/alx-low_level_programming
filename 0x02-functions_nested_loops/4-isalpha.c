#include "main.h"
/**
 * _isalpha - a func
 * @c : the char
 *
 * Desciption: a good func
 * Return: 1 if it is lower case and 0 if it is an upper case
 */

int _isalpha(int c)
{
	if (c < 122 && c > 97 && c > 65 && c < 90)
		return (1);
	else
		return (0);
}
