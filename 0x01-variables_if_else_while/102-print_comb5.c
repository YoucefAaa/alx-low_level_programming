#include <stdio.h>
/**
 * main - a func
 *
 * Description: a func to print nums
 * Return: a 0
 */
int main(void)
{
	int y;
	int k;

	for (y = 0; y < 100; y++)
	{
		for (k = 0; k < 100; k++)
		{
			if (k > y)
			{
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');
				putchar(' ');
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');

				if (y * 100 + k != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);


}
