#include <stdio.h>
/**
  * main - a func
  *
  * Description: aff
  * Return: a 0 like always
  */
int main(void)
{
	int i;
	int z = '0';

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(z + i);
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n')
	return (0);
}
