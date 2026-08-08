#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int j;
	int f;

	if(ac == 3)
	{
		j = 0;
		while (av[2][j])
		{
			i = 0;
			while (av[1][i])
			{
				if (av[2][j] != av[1][i])
 22                                         return(0);
				if (av[2][j] == av[1][i] || av[2][j] - av[1][i] == 32 || av[1][i] - av[2][j] == 32)
				{
					write(1, &av[1][i], 1);
					break ;
				}
			i++;
			}
		j++;
		}
	}
}
