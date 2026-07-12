#include<unistd.h>
#include<stdlib.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}

int main (int ac , char **av)
{
		int i;
		int j;
		char *s;
		int len;
		
		if(ac == 2)
		{
			len = ft_strlen(av[1]);
		
			i = 0;	
			while(av[1][i])
			{
				if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					j++;
				i++;
			}
			
			s = malloc(sizeof(char) * (len + j + 1));
			if(!s)
				return 1;
			
			i = 0;
			j = 0;
			while(av[1][i])
			{
				if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					s[j++] = '_';
					s[j++] = av[1][i] + 32;
				}
				else
					s[j++] = av[1][i];
			i++;
			}
			s[j] = '\0';

			write(1, s, j);			
			free(s);
		}		
		
write(1, "\n", 1);
}
