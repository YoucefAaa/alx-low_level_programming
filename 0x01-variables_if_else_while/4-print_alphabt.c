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
	int i;

	for (i = 0; i < 26; i++)
	{
		if ((start + i) != 'e')
			if ((start + i) != 'q')
				putchar(start + i);
	}
	putchar('\n');
	return (0);
}
