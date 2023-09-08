#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - a functuon
  *
  * Descrription: a func to say hi
  * Return: a 0 man
  */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n < 0)
				{
					
					printf("%d is negative\n", n);
				}
				else
				{
					printf("%d is zero\n", n);
				}
				return (0);
}
