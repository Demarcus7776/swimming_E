#include <unistd.h>

int	ft_c_w(char *s)
{
	int i;
	int c;

	i =0;
	c =0;
	while(s[i])
	{
		if((s[i] >= 'a' && s[i] <= 'z'|| s[i] >= 'A' && s[i] <= 'Z' ) && s[i - 1] == ' ')
			c++;

		 if(s[i] >= '0' && s[i] <= '9' && s[i - 1] == ' ')
			c++;

		else if(i == 0 && s[i] != ' ')
			c++;
	i++;
	}

	return c;
}

#include<stdio.h>

int main ()
{
	char s[] = "   hello    42  hi  ";

	printf("%d", ft_c_w(s));
}
