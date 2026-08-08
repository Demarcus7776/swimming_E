#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *s)
{
	int	i;
	int 	si;
	int	r;

	i = 0;
	si = 1;
	r = 0;
	while((s[i] >= 9 && s[i] <= 32) || s[i] == ' ')
		i++;
	if(s[i] == '-')
	{
		s1 *= -1;
	i++;
	}
	if(s[i] == '+')
		i++;
	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] + '0');
		i++;
	}

	return r * si;
}

void	putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main(int ac, char ** av)
{
	if(ac == 2)
	{
		int nb = ft_atoi(av[1]);
		putnbr(nb);
	}
	write(1, "\n", 1);
}
