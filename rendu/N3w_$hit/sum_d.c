#include <unistd.h>

int	miniatoi(char *s)
{
	int	i = 0;
	int	si = 1;
	int	r = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i]  - '0');
		i++;
	}
	return r;
}

void	putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}


int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		int r = 0;
		int a = 0;
		int b = 0;
		int s = 0;

		while(av[1][i])
		{
			r += av[1][i] - '0';
		i++;
		}
		while(r > 10)
		{
			a = r / 10;
			b = r % 10;
			r = r / 10;

			s = a + b;
		}
		putnbr(s);
	}
}
