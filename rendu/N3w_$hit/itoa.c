#include <unistd.h>
#include <stdlib.h>

int count(int nb)
{
	int c = 0;
	if (nb < 0)
	{
		c++;
		nb = -nb;
	}
	while( nb >= 1)
	{
		c++;
		nb = nb / 10;
	}
	return c;
}

char	*itoa(int nb)
{
	int	i;
	int	l;
	char	*s;

	l = count(nb);
	s = malloc(sizeof(char) * (l + 1));
	if(!s)
		return NULL;
	s[l] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
 	l--;
	while(l > 0)
	{
		s[l] = (nb % 10) + '0';
		nb = nb / 10;
		l--; 
	}
	}
	if (nb > 0)
	{
		l--;
		while(l >= 0)
	       {
	             s[l] = (nb % 10) + '0';
	             nb = nb / 10;
	               l--;
	       }
	}
	return s;
}

#include <stdio.h>

int main()
{
	int i = -153438242;
	char *r = itoa(i);
	printf("%s\n", r);
}
