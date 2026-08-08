#include <unistd.h>

int	checkdub(char *s, char c , int pos)
{
	int	i;
	i = 0;
	while(s[i] &&(pos == -1 || i < pos))
	{
		if(s[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	int	i;
	int	j;
	
	if (ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			if(!checkdub(av[1],av[1][i],i))
				write(1, &av[1][i], 1);
			i++;
		}
		j = 0;
		  while(av[2][j])
                  {
                          if(!checkdub(av[2],av[2][j],j) && !checkdub(av[1],av[2][j],-1))
                                 write(1, &av[2][j], 1);
                         j++;
                  }
	}
	write(1,"\n",1);
}
