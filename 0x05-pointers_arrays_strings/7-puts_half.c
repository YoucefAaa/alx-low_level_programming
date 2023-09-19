#include "main.h"
#include <string.h>
/**
  * puts_half - a func
  * @str : a param
  */

void puts_half(char *str)
{
	int i;
	int lenth = strlen(str);

	if (lenth % 2 == 0)
	{
		for (i = lenth / 2 ; i < lenth ; i++)
			_putchar(str[i]);
	}
	else
	{
		int n = (lenth - 1) / 2;

		for (i = n ; i < lenth ; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
