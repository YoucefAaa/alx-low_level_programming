#include <stdio.h>
/**
  * main - a func
  *
  * Description: a function
  * Return: a 0
  */

int main(void)
{
	char start = '0';
	int i;

	for (i = 0 ; i < 10; i++)
	{
		putchar(start + i);
	}
	putchar('\n');
	return (0);

}
