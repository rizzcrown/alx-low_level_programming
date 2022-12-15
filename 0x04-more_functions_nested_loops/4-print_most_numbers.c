#include <stdio.h>

void print_most_numbers(void);

int main(void)
{
    print_most_numbers();
    return (0);
}
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}