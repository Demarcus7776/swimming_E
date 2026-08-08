#include <unistd.h>

void	ft_putnbr(int nb)
{
	if(nb >= 10)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int 	c;

	if(ac == 2)
	{
		c = 1;
		i = 0;
		while(av[1][i])
		{
			c = 1;
			while (av[1][i] == av[1][i + 1])
			{
				c++;
			i++;
			}
			ft_putnbr(c);
			write(1, &av[1][i], 1);
		i++;
		}
	}
}
