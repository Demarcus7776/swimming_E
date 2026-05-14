#include<unistd.h>

int main (int ac , char **av)
{
	int i;
	int f;

	if(ac == 2)
	{
		i = 0;
		f = 1;		
	
		while(av[1][i] == '\t' || av[1][i] == ' ')
				i++;
		while(av[1][i])
		{
			if(!f)
			write(1, "   ", 3);
			
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				i++;
			}
			
			while(av[1][i] == ' ' || av[1][i] == '\t')
				i++;

			f = 0;
		}	
	}
	write(1, "\n", 1);
}
