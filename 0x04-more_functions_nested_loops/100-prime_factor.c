#include <stdio.h>

int main(void)
{
    long int number = 612852475143;
    long int i = 2;
    while (i * i <= number)
    {
        if (number % i == 0)
        {
            number /= i;
        }
        else
        {
            i++;
        }
    }
    printf("%ld\n", number);
    return (0);
}

