#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rle(char *s)
{
	int i;
	int j;
	int c;
	
	i = 0;
	j = 0;
	while(s[i])
	{
		if(s[j] == s[j+1])
			c++;
		if(s[i] != s[i+1])
		{
			ft_putchar(c + 48);
			ft_putchar(s[i]);
			c = 0;
		}
		i++;
	}

}

int main ()
{
	char s[] = "aaaabbbccccdd";
	
	rle(s);
}
