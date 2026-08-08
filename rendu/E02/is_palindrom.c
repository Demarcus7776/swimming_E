#include <unistd.h>

int	ft_strln(char *s)
{
	int	i;
	i = 0;
	
	while(s[i])
		i++;
	return i;
}

int main(int ac, char **av)
{
	int	i;
	int	l;

	if (ac == 2)
	{
		i = 0;
		l = ft_strln(av[1]) - 1;
		while (av[1][i])
		{
			if(av[1][i] == av[1][l])
				write(1, &av[1][i], 1);
			if(av[1][i] != av[1][l])
				break;
		i++;
		l--;
		}
	}
	write(1, "\n", 1);
}
