#include<stdio.h>

char	counter(char *s)
{
	int i;
	int c;	
	
	i = 0;
	c = 0;
	while(s[i])
	{
		if(s[i] >= 'A'  && s[i] <= 'Z')
			c++;
		
		i++;
	}


	return c;
}

int main ()
{
	char str[] = "hello";

	printf("%d", counter(str));
}
