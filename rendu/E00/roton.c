#include<unistd.h>

int	is_alpha(char c)
{
	return (c >='a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

void	roton(char *s)
{
	int i;
 	int c;

	i = 0;
	while(s[i])
	{
		c = s[i];

		if(is_alpha(c))
		{
			if (c == 'z' || c == 'Z')
				c = 'a';
 			 else if((c >= 'a' && c <='z') || (c >= 'A' || c <= 'Z'))
				c += 1;
		}
		write(1, &c, 1);
		i++;
	}
}

int main ()
{
	char s[] = "AkjhZ zLKIJz , 23y ";

	roton(s);
}
