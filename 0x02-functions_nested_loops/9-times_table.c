#include <stdio.h>

void times_table(void)
{
    for (int i = 0; i <= 9; i++) 
    {
        for (int j = 0; j <= 9; j++) 
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
    }
}

int main(void)
{
    times_table();
    return 0;
}