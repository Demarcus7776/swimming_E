#include <unistd.h>

int dubl(char *s , char b ,int pos)
{
	int i = 0;
	while(s[i] && i < pos)
	{
		if(s[i] == b)
		return 1;
	i++;
	}
	return 0;
}
int main (int ac , char **av)
{
	int	i = 0;
	if(ac == 3)
	{
		while(av[1][i] )
		{
			if(!dubl(av[2] , av[1][i] , i) && !dubl(av[1],av[1][i],i))
			write(1,&av[1][i],1);
		i++;
		}
	}
	write(1,"\n",1);
	
}
