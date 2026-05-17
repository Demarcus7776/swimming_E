#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

long	ft_int(long nb)
{
	long c =0;

		if(nb == 0)
                   return 1;
  
          if(nb == -2147483648)
                return 0;

	while(nb > 0)
	{
		nb /= 10;
	c++;
	}

	return c;
}

char	*ft_itoa(int nbr)
{
	char *s;
	int i;
	long len = 0;
	int c = nbr;	
	
	if(c < 0)
	{
	   c = -c;
		len++;
	}

	len += ft_int(c);
	
	s = malloc(sizeof(char) * len + 1);
	
	i = len;
		
	s[i] = '\0';	
	i--;

	while(i >= 0)
	{
		s[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}

	if(nbr < 0)
	{
		write(1, "-", 1);
	}	
	
	return s;
}

int main ()
{
	char *s = ft_itoa(42);
	int i; 

	i = 0;
	while(s[i])
	{
		printf("%c", s[i]);
		i++;
	}
	
	free(s);
}
