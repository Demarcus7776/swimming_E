#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	r;
	int	sum;

	if (ac == 2)
	{
		i = 0;
		sum = 0;
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			if (!av[1][i])
				break ;
			r = 0;
			while (av[1][i] && av[1][i] != ' ')
			{
				r = r * 10 + av[1][i] - '0';
				i++;
			}
			if (r <= 10)
				return 0;
			sum += r;
		}
		printf("%d\n", sum);
	}
	return (0);
}
