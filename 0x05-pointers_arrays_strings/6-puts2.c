#include "main.h"
#include <string.h>

void puts2(char *str)
{
	int i;
	int lenth;
	lenth = strlen(str);

	for (i = 0 ; i < lenth ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
}
