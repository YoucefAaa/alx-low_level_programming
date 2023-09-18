#include "main.h"
/**
  * swap_int - a func
  * @a : a param
  * @b : a 2nd param
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
