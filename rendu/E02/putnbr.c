#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c , 1);
}

void	put_nbr(int n)
{
	int c;
	int div;

		div = 1;
	while (n / div >= 10)
    		div *= 10;

	while (div > 0)
	{
 	   c = (n / div) + '0';
	    write(1, &c, 1);
	    n %= div;
	    div /= 10;
	}
}

int main ()
{
	put_nbr(1337);
}
