#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if(ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			j = 0;
			while(av[2][j])
			{
				if(av[1][i] == av[2][j])
				{
					write(1, &av[1][i], 1);
					break;
				}
				else if (av[1][i] != av[2][j] && av[2][j + 1] == '\0')
				{
					write(1, "\n", 1);
					return 0;
				}
			j++;
			}
		i++;
		}
	}
	write(1, "\n", 1);
}
