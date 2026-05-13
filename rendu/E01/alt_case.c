#include<unistd.h>

int main (int ac, char **av)
{
	int i;
	int f;

	if(ac == 2)
	{
		i = 0;
		f = 1;
		while(av[1][i])
		{
				if (av[1][i] == ' ')
					f = 1;

				if(av[1][i] >= 'a' && av[1][i] <= 'z')
				{
						if(f)
						av[1][i] -= 32;

						f = !f;
				}
				else if(av[1][i] >= 'A' && av[1][i] <= 'Z' )
				{
						if(!f)
						av[1][i] += 32;

						f = !f;
				}
			write(1, &av[1][i], 1);
		i++;
		}
		
	}
}
