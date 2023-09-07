#include <stdio.h>
/**
 * main - a normal func
 *
 * Description: a rugular func
 * Return: a 0
 */
int main(void)
{
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("Size of an int: %lu\n byte(s)", sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", sizeof(long));
	printf("Size of a long long int: %lu\n byte(s)", sizeof(unsigned long));
	printf("Size of a float: %lu\n byte(s)", sizeof(float));
	return (0);
}
