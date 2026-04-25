#include<unistd.h>
#include<stdio.h>

char	sumeven(char *s)
{
	int i;
	char counter;	


	i = 0;
	counter = 0;
	
	if (s[i] == '\0')
		return 0;
	
	while(s[i])
	{	
		if(s[i] % 2 == 0)
			counter +=  (s[i] - '0');
		else
			return 0;
		i++;
	}
		
	return counter;
}

int main ()
{
	char s[] = "";

	printf("%d", sumeven(s));
}
