#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int strlen_f(char *s)
{
	int i;
	i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}

char *skip(char *si)
{
	int i;
	char *s;
	int l;

	l = strlen_f(si);
	i = 0;
	s = malloc(sizeof(char) * l + 1);
	if(!s)
		return NULL;
	while(si[i])
	{
		while(si[i] != ' ' ||s[]  )
	}
}
