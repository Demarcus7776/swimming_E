#include <unistd.h>

int main(int ac , char **av)
{
	int	i;

	if(ac == 3)
	{
		int k = av[2][0] - '0';
		i = 0;

		while(av[1][i])
		{
			if(i % k == 1)
				write(1, &av[1][i], 1);
		i++;
		}
	}
}
