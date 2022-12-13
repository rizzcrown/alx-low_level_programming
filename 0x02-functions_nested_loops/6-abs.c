#include <stdio.h>


int _abs(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The absolute value of %d is %d\n", n, _abs(n));

    return 0;
}