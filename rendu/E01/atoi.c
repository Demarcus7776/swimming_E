#include<unistd.h>
#include<stdio.h>

int	is_alpha(char *s)
{
	int i;
	
	i = 0;
	return(s[i] >= 'a' && s[i] <= 'z'
		|| s[i] >= 'A' && s[i] <= 'Z');
}

int	ft_atoi(char *s)
{
	int i;
	int r;

	r = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] >= 'a' && s[i]<= 'z' || s[i] >= 'A' && s[i] <= 'Z')
				break;

		if(s[i] >= 9 && s[i] <= 13)
				i++;

		if(s[i] == '-' || s[i] == '+')
		{
			s[i] *= s[i + 1];
			write(1, &s[i], 1);
		}

		if(s[i] >= '0' && s[i] <= '9')
			r = (r * 10) + (s[i] - '0');
	
	i++;			
	}
	
	if(is_alpha(s))
		return 0;
	
	return r;
}

int main ()
{
	char *s = "   -+-42abc4642";
	
	printf("%d", ft_atoi(s));
}
