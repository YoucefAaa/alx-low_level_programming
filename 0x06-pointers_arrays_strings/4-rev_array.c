#include "main.h"
#include <string.h>
/**
  *
  *
  *
  *
  *
  */
void reverse_array(int *a, int n)
{
	char txt[n];
	int i, len = strlen(*a);

	for (i = 0, len ; i < len ; i++, len--)
	{
		txt[i] = a [len];
	}
	a = txt;
}
