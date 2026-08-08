#include <unistd.h>

int	alpha(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

int	key(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a');
	if (c >= 'A' && c <= 'Z')
		return (c - 'A');
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	r;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i])
		{
			if (alpha(av[1][i]))
			{
				if (av[2][j] == '\0')
					j = 0;
				r = key(av[2][j]);
				if (av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] = (av[1][i] - 'a' + r) % 26 + 'a';
				else
					av[1][i] = (av[1][i] - 'A' + r) % 26 + 'A';
				j++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
