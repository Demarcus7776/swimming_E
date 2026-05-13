#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	upper;

	if (ac == 2)
	{
		i = 0;
		upper = 1;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				if (upper)
					av[1][i] -= 32;
				upper = !upper;
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (!upper)
					av[1][i] += 32;
				upper = !upper;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
