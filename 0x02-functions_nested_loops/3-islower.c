#include <stdio.h>
#include <ctype.h>
int _islower(int c)
{
    if(islower(c))
        return 1;
    else
        return 0;
}