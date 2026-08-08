#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int j;
	int f;

	i = 0;
	f = 1;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			if ((av[i][j] == 'e' && av[i][j + 1] == ' ' )|| av[i][j + 1] == '\0')
			{
				f = 1;
				break;
			}
			else
				f = 0;
			j++;
		}
		if(f)
		{
			write(1, "e", 1);
			break;
		}
		i++;
	}
	write(1, "\n", 1);

}
