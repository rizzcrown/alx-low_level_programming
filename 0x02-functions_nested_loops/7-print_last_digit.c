#include <stdio.h>

int main()
{
    print_last_digit(466764);
    return 0;
}
int print_last_digit(int num){
    int last_digit = num % 10;
    putchar(last_digit + '0');
    return last_digit;
}