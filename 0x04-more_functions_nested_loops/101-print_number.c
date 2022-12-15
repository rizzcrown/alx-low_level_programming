#include <stdio.h>
#include <unistd.h>

void print_number(int n);

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
/**
 * print_number - prints an integer
 *
 * @n: int to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}