#include <stdio.h>
/**
 * main - a code to print from 1 to 500
 *
 * Description: a normal func
 * Return: 0
 */
int main(void)
{
	int y;
	int c;
	int k;

	for (y = 48; y < 58; y++)
	{
		for (c = 48; c < 58; c++)
		{
			if (c > y)
			{
				for (k = 48; k < 58; k++)
				{
					if (k > c)
					{
					putchar(y);
					putchar(c);
					putchar(k);
					if (y == 55 && c == 56 && k == 57)
					{
						break;
					}

					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
