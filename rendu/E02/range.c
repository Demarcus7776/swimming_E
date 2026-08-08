#include <unistd.h>
#include <stdlib.h>

int	*range(int min , int max)
{
	int	i;
	int	*a;
	int	s = max - min;

	a = malloc(sizeof(int) * s);
	if(!a)
		return 0;
	i = 0;
	while(i < s)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (a);
}
