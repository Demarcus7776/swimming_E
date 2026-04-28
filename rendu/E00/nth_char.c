#include<unistd.h>

int main (int ac, char **av)
{
	int i;

	if(ac == 3)
	{
		char nb = *av[2] - '0';
		i = 0;
		while(av[1][i])
		{
			if(av[1][i] % nb == 0)
				write(1, &av[1][i], 1);
			i++;	
		}
	}

	write(1, "\n", 1);
}
