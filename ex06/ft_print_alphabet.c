#include <stdio.h>

void ft_print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}

int main()
{
	ft_print_alphabet();
	return(0);
}
