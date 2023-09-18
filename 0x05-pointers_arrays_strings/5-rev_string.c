#include <string.h>
/**
  * rev_string - a func
  * @s : a pram
  */

void rev_string(char *s)
{
	int i;
	int lenth = strlen(s);

	for (i = 0 ; i < lenth / 2 ; i++)
	{
		char temp = s[i];

		s[i] = s[lenth - i - 1];
		s[lenth - i - 1] = temp;
	}
}
