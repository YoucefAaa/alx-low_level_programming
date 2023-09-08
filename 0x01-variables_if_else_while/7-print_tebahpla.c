#include <stdio.h>
/**
  * main - a func
  *
  * Description: sdf
  * Return: a 0
  */
int main(void)
{
	char start = 'a';
	int i;

	for (i = 25 ; i >= 0 ; i--)
	{
		putchar(start + i);
	}
	putchar('\n');
	return (0);
}
