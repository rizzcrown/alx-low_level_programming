#include <stdio.h>

void jack_bauer(void)
{
    for (int hour=0; hour<24; hour++)
    {
        for (int minute=0; minute<60; minute++)
        {
            printf("%02d:%02d\n", hour, minute);
        }
    }
}

int main(void)
{
    jack_bauer();
    return 0;
}