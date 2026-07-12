#include<unistd.h>

int     ft_strlen(char *s)
{
        int i = 0;
        while(s[i])
        {
                i++;
        }
        return i;
}

int main (int ac , char **av)
{
        int len;

        if(ac == 2)
        {
                len = ft_strlen(av[1]);

                while(len >= 0 && av[1][len] == ' ' || av[1][len] == '\t')
                                len--;

                int end = len;

                while(len >= 0 && av[1][len] != ' ' && av[1][len] != '\t' )
                                len--;

                int s = len + 1;

                while(s <= end)
                {
                        write(1, &av[1][s], 1);
                        s++;
                }


        }
        write(1, "\n", 1);
}
