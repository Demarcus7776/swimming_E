#include <unistd.h>

int main(int ac , char **av)
{
	int  i;
	int n = ac - 1;

	if (ac > 1)
	{
		i = 0;
		while(av[n][i])
		{
			write(1, &av[n][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
