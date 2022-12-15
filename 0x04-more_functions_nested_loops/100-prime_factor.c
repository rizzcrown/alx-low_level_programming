#include <stdio.h>
#include <math.h>

int main(void) {
    long long int num = 612852475143;
    int largestPrimeFactor = 2;

    while (num > 1) {
        while (num % largestPrimeFactor == 0) {
            num /= largestPrimeFactor;
        }
        largestPrimeFactor++;
    }

    printf("%d\n", largestPrimeFactor - 1);

    return 0;
}