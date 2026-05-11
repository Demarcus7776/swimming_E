#include<unistd.h>

void  ft_putchar(char c)
{
	write(1, &c, 1);
}

int main ()
{
	int i = 0;

	while(i < 10)
	{
		if(i % 2 == 0)
		{
			ft_putchar(i + '0');
			write(1, "\t", 1);
		}
	i++;
	}
	write(1, "10", 2);
	write(1, "\n", 1);
}
