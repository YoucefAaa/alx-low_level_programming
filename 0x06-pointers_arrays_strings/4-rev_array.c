#include "main.h"
#include <string.h>
/**
  * reverse_array - a func
  * @a : a param
  * @n : another param
  */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
