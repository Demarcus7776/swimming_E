#include <unistd.h>

int	ft_atoi(char *s)
{
	int i = 0;
	int si = 1;
	int r = 0;
	int c;

	while(s[i] >= 9 && s[i] <= 13 || s[i] == ' ')
		i++;
	
	if(s[i] == '-')
	{
		si *= -1;
		i++;
	}
	if(s[i] == '+')
		i++;
	
	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}

	return r * si;
}

#include <stdio.h>

int main ()
{
	printf("%i", ft_atoi("   --42"));
}
