#include "main.h"
#include <string.h>
/**
  * string_toupper - a func
  * @s : a param
  * Return: a var
  *
  */

char *string_toupper(char *s)
{
	int i;


	for (i = 0 ; i < (int) strlen(s) ; i++)
	{
		if (s[i] > 'a' && s[i] < 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
