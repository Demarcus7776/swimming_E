#include <unistd.h>

int	ft_atoi(char *s)
{
	int i = 0;
	int si = 1;
	int c;
	int r = 0;
	
	while(s[i] >= 9 && s[i] <= 13 || s[i] == ' ')
                          i++;

	//while(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
	//		i++;
	while(s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			si  *= -1;
		i++;
	}

	while(s[i]>= '0' && s[i] <= '9')
	{
			r = r * 10 + s[i] - '0';
		i++;
	}
	return r * si;
}

#include <stdio.h>

int main ()
{
	printf("%d", ft_atoi(" +---+ia12abs99"));
}
