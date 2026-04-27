#include<stdio.h>

char 	sumdigits(char *s)
{
	int i;
	int j;
	char  sum = 0;
	char res;

	i = 0;
	
	while(s[i])
	{
		sum += (s[i] - '0');
		res = sum % 10;
		res += sum / 10;
		i++;
	}

	return res;
}

int main ()
{
	char s[] = "12345";

	printf("%d", sumdigits(s));
}
