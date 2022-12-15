
#include <stdio.h>

void print_triangle(int size);

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}

void print_triangle(int size)
{
    int row, col;

    if (size <= 0)
    {
        printf("\n");
    }
    else
    {
        for (row = 0; row < size; row++)
        {
            for (col = size - row; col > 1; col--)
            {
                printf(" ");
            }
            for (col = 0; col <= row; col++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}