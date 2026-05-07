#include<unistd.h>

int is_alpha(char c)
{
	return(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

void	capi(char *s)
{
	int i;
	int c;
	
	i = 0;
	while(s[i])
	{
		c = s[i];

		if(c >= 'A' && c <= 'Z')
			s[i] += 32;

		if(is_alpha(c) && (i == 0 || !is_alpha(s[i - 1])))
			s[i] -=32 ;

		write(1, &s[i], 1);

		i++;
	}
}

int main ()
{
	char s[] = "42school-is_Cool";

	capi(s);
}
