#include<unistd.h>

void	putnbr(int nb)
{
	char res;

	if(nb >= 9)
		putnbr(nb / 10);
	res = (nb % 10) + '0';
	write(1, &res, 1);
}

int main (int ac, char **av)
{
	int	i;
	
	if(ac == 2)
	{
		int a = 0;
		int b = 0;
		int sum;
		int res;
		sum = 0;
		i = 0;

		while(av[1][i])
		{
			sum += (av[1][i] - '0');
			a = (sum / 10);
			b = (sum % 10);
			res = (a + b);
		i++;
		}
		putnbr(res);
	}
}
