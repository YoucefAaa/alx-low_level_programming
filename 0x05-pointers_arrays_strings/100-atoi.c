#include "main.h"
#include <string.h>
/**
  *
  *
  *
  *
  *
  */
int _atoi(char *s) {
	int i, res = 0;
	int sign = 1;
	int length = strlen(s);
	int foundDigit = 0;

	for (i = 0; i < length; i++)
	{
	if (s[i] >= '0' && s[i] <= '9') 
	{
	int num = s[i] - '0';
		res = res * 10 + num;
	foundDigit = 1;
	} 

	else if (s[i] == '-' && !foundDigit) 
	{
		sign = -1;
        }
    }

	return sign * res;
}

