#include <unistd.h>

int	is_alpha(char s)
{
	return ((s >= 'a' && s <= 'z')
 || (s >= 'A' && s <= 'Z'));
}
void	rmv_space(char *s)
{
	int i = 0;
	
	while(s[i] == ' ' || s[i] == '\t' ||  s[i] >= '0' && s[i] <= '9')
		i++;

	while(s[i])
	{
		while(s[i] && s[i] != ' ' && s[i] != '\t')
		{
			if(!(s[i] >= '0' && s[i] <= '9'))
				write(1, &s[i], 1);
			i++;
		}

		while(s[i] == ' ' || s[i] == '\t' || s[i] >= '0' && s[i] <= '9')
			i++;
	
		if(s[i])
			write(1, " ", 1);
	}
}

int main (int ac , char ** av)
{
	int n = 1;
	int i;

	while(n <= ac)
	{
		i = 0;
		while(av[n][i])
		{
			if(is_alpha(av[n][i]))
			{
				if(av[n][i - 1] == ' ' || i == 0)
				{
					if(av[n][i] >= 'a' && av[n][i] <= 'z')
						av[n][i] -= 32;
				}
				else if (av[n][i] >= 'A' && av[n][i] <= 'Z')
					av[n][i] += 32;
			}
		i++;
		}
		rmv_space(av[n]);
		write(1, "\n", 1);
	n++;
	}
}
