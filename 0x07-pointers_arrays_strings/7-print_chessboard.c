#include <string.h>
/**
  * print_chessboard - a func
  * @a : a param
  */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			putchar(a[i][j]);
	putchar('\n');
	}
}
