#include <unistd.h>

int	alpha(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

void	putnb(int nb)
{
	char	c;

	if (nb >= 10)
		putnb(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	sum;

	if (ac != 2)
		return (0);
	i = 0;
	while (av[1][i])
	{
		if (alpha(av[1][i]))
		{
			write(1, &av[1][i], 1);
			i++;
		}
		else if (av[1][i] >= '0' && av[1][i] <= '9')
		{
			sum = 0;
			while (av[1][i] >= '0' && av[1][i] <= '9')
			{
				sum += av[1][i] - '0';
				i++;
			}
			putnb(sum);
		}
		else
			i++;
	}
	write(1, "\n", 1);
}
