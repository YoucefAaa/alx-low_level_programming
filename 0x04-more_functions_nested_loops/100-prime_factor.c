#include <stdio.h>

int main() {
    long long int number = 612852475143;
    long long int i = 2;
    while (i * i <= number) {
        if (number % i == 0) {
            number /= i;
        } else {
            i++;
        }
    }
    printf("%lld\n", number);
    return 0;
}

