#include <stdio.h>

void more_numbers(void);

int main(void)
{
    more_numbers();
    return (0);
}

void more_numbers(void)
{
  for (int i = 0; i <= 9; i++)
  {
    for (int j = 0; j <= 14; j++)
    {
      if (j > 9)
      {
        _putchar((j / 10) + '0');
      }
      _putchar((j % 10) + '0');
    }
    _putchar('\n');
  }
}