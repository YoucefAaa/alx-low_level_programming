#include <stdio.h>

int main(void)
{
	char start = 'a';
	int i;
	for (int i = 0; i < 26; i++)
	{
		putchar(start + i);
	}
	putchar('\n');
	return (0);
}
