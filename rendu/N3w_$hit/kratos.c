#include <unistd.h>

int	ft_strlen(char *s)
{
	int i = 0 ;
	
	while(s[i])
	{
		i++;
	}
	return i;
}

int main(int ac , char **av)
{
	int	i;
	int	l;
	int	max = 0;
	int	r = 0;

	if (ac > 1)
	{
		i = 1;
		while(i < ac)
		{
			l = ft_strlen(av[i]);
			if (l > max)
			{
				max = l;
				r = i;
			}
		i++;
		}
		i = 0;
		while(av[r][i])
		{
			if(av[r][i] >= 'a' && av[r][i] <= 'z')
				av[r][i] -= 32;
			
			write(1, &av[r][i], 1);
		i++;
		}
}
}
