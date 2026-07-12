#include <unistd.h>

int main (int ac , char **av)
{
	int i = 0;
	char  c;
	char b;

	if (ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z') 
			{
				c = av[1][i];
				 av[1][i] = 'z' -  (c - 'a');
			}
			write(1, &av[1][i], 1);
		i++;
		}
	}
}
