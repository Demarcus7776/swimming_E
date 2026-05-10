#include<unistd.h>

int	dub(char *s, char c, int pos)
{
	int i;
	
	i = 0;
	while(i < pos)
	{
		if(s[i] == c)
			return (1);
	i++;
	}
	
	return	(0);
}

int	check(char *s, char c)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			return 1;
	i++;
	}
	return 0;
}

int main (int ac , char **av)
{
	int i;
	
	if(ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			if(!dub(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
		i++;
		}

		i = 0;
		while(av[2][i])
		{
			if(!(check(av[1],av[2][i])) && !(dub(av[2],av[2][i],i)))
				write(1, &av[2][i], 1);
		i++;
		}
		
	}
	write(1, "\n", 1);
}
