#include <stdio.h>

void ft_is_negative(int n)
{
	if (n < 0)
	{
		putchar('N');
	}

	else
	{
		putchar('P');
	}
	
	putchar('\n');
}

int main(void)
{
	int nb;

	printf("donne moi un nombre face de cul ?!");
	printf("\n");	
	
	if (scanf("%d", &nb) != 1)
	{
		printf("i said number sucker ;0 \n");
	}	

	else
	{	
		ft_is_negative(nb);
		printf("tiens vilain \n");
	}
	return(0);
}
