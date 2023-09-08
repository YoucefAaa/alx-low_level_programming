#include <stdio.h>
/**
  * main - a func
  *
  * Description: a loop
  * Return: a base 16
  */
int main(void)
{
	char start = 'a';
	int z = '0';
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(z + i);
	}
	for (j = 0 ; j < 6 ; j++)
	{
		putchar(start + j);
	}
	putchar('\n');
	return (0);
}
