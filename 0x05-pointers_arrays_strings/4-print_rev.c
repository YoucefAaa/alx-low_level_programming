#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - a func
 * @s : a parameter 
 */
void print_rev(char *s)
{
	int i;
	int lenth = strlen(s);

	for (i = 0 ; i < lenth / 2 ; i++)
	{
		char temp = s[i];

		s[i] = s[lenth - i - 1];
		s[lenth - i - 1 - 1] = temp;
	}
	puts(s);

}
