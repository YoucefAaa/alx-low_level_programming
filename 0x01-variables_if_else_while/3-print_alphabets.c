#include <stdio.h>
  /**
    * main - function
    *
    * Descriptiot: a func
    * Return: a 0
    */
int main(void)
{
	char start = 'a';
	char wnds = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(start + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(wnds + i);
	}
	putchar('\n');
	return (0);
}
