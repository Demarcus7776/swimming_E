#include<unistd.h>

int	atoi(char *s)
{
	int res;
	int i;
	
	res = 0;
	i = 0;
	while(s[i])
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res);
}

void	ft_putnbr(int n)
{
	char c;
	
	if (n > 9)
	ft_putnbr(n / 10);
	c = (n % 10) + '0';

	write(1, &c, 1);
}

int	prime(int n)
{
	int i =2;
 	
	while(i * i <= n)
	{
		if(n % i == 0)
			return 0;
	i++;		
	}
	return 1;
}
	
void	sum(char *s)
{
	int i = 2;
	int num = atoi(s);
	int r = 0;

	while(i <= num)
	{
		if(p(i))
			r += i;
		i++;
	} 
	ft_putnbr(r);
}

int main (int ac, char **av)
{
	int i = 0 ;
	if(ac == 2)
	{
		sum(av[1]);
	}
}
