#include <stdio.h>

void ft_print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
}

void main()
{
	ft_print_numbers();
}

