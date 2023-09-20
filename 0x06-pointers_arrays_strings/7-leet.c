#include "main.h"
#include <string.h>
/**
  * leet - a func
  * @s : a param
  * Return: a var1
  */

char *leet(char *s)
{
	int i;

	for (i = 0 ; i < (int) strlen(s) ; i++)
	{
		if (s[i] == 65 || s[i] == 97)
			s[i] = 52;
		else if (s[i] == 69 || s[i] == 101)
			s[i] = 51;
		else if (s[i] == 111 || s[i] == 79)
			s[i] = 48;
		else if (s[i] == 116 || s[i] == 84)
			s[i] = 55;
		else if (s[i] == 76 || s[i] == 108)
			s[i] = 49;
	}
	return (s);
}
