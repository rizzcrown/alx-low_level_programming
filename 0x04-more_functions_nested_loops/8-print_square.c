#include <stdio.h>
void print_square(int size);

int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

void print_square(int size)
{
  int i;
  int j;
  if (size > 0)
  {
    for (i = 0; i < size; i++)
    {
      for (j = 0; j < size; j++)
      {
        _putchar('#');
      }
      _putchar('\n');
    }
  }
  else
  {
    _putchar('\n');
  }
}