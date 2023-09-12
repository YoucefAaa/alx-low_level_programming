#include "main.h"
/**
 * _islower - a func
 *
 * @c: The character to check
 * Desciption: a good func
 * Return: 1 if it is lower case and 0 if it is an upper case
 */

int _islower(int c)
{
	if (c < 122 && c > 97)
		return (1);
	else
		return (0);
}
