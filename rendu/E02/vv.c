#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_rev(char *s)
{
	int l = strlen(s);

	while(l >= 0)
	{
		if(s[l] >= 'a' && s[l] <'z')
			s[l] -= 32;
		else if(s[l] >= 'A' && s[l] <= 'z')
			s[l] += 32;
		else
			write(1, &s[l], 1);
		l--;	
	}
}

int main ()
{
	ft_rev("Hello World");
}
