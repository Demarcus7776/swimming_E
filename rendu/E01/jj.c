#include<stdio.h>

void	int_len(int nb)
{
	int c;

	c = 0 ;	
	while(nb > 0)
	{
		nb /= 10;
	c++;
	}

	printf("%d", nb);
}

int main()
{
	int_len(1227);
}
