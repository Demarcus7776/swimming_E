#include <unistd.h>
int	is_alpha(char c)
{
	return(c >= 'a' && c <= 'z' 
		|| c >= 'A' && c <= 'Z');
}

int	count_words(char *s)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while(s[i] && s[i] >= '0' && s[i] <= '9')
			i++;
	i = 0;
	while (s[i])
	{

		if(is_alpha(s[i]))
		{
			if(i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t')
				c++;
		}
	i++;
	}
	return c;
}

#include <stdio.h>

int main(int ac, char **av)
{
	printf("%d", count_words(av[1]));
}
